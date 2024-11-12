﻿/***************************************************************************************************
 * Copyright 2018-2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#include "MainWindow.h"

#include <QAction>
#include <QButtonGroup>
#include <QClipboard>
#include <QCloseEvent>
#include <QDesktopServices>
#include <QFileDialog>
#include <QImage>
#include <QLabel>
#include <QLayout>
#include <QMenuBar>
#include <QPainter>
#include <QPixmap>
#include <QScrollBar>
#include <QSizePolicy>
#include <QStackedWidget>
#include <QStatusBar>
#include <QTextBrowser>
#include <QToolBar>
#include <QToolButton>
#include <QVariant>
#include "maincontrol.h"
#include "login.h"
#include "selectparameters.h"

#include "xToolsApplication.h"
#ifdef X_TOOLS_ENABLE_MODULE_ASSISTANTS
#include "xToolsAssistantFactory.h"
#endif
#include "xToolsSettings.h"
#include "xToolsToolBoxUi.h"
#ifdef X_TOOLS_ENABLE_MODULE_SERIALBUS
#ifdef X_TOOLS_ENABLE_MODULE_CANBUS
#include "xToolsCanBusStudioUi.h"
#endif
#ifdef X_TOOLS_ENABLE_MODULE_MODBUS
#include "xToolsModbusStudioUi.h"
#endif
#endif
#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
#include "xToolsPayJsApi.h"
#endif

#ifdef Q_OS_WIN
#include "SystemTrayIcon.h"
#endif

MainWindow::MainWindow(QWidget* parent)
#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
    : xToolsPrivateMainWindow(parent)
#else
    : xToolsMainWindow(parent)
#endif
{
#ifdef Q_OS_WIN
    if (QSystemTrayIcon::isSystemTrayAvailable()) {
        auto systemTrayIcon = new SystemTrayIcon(this);
        QObject::connect(systemTrayIcon, &SystemTrayIcon::invokeExit, this, [=]() {
            QApplication::closeAllWindows();
            QApplication::quit();
        });
        QObject::connect(systemTrayIcon,
                         &SystemTrayIcon::invokeShowMainWindow,
                         this,
                         &MainWindow::show);
        systemTrayIcon->show();
    }
#endif

#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
#ifdef QT_DEBUG
    xToolsPayJsApi::singleton().setPrice(2);
#else
    xToolsPayJsApi::singleton().setPrice(10 * 10 * 10 * 10);
#endif
#endif

    auto* stackedWidget = new QStackedWidget();
    setCentralWidget(stackedWidget);

#if 0
#ifdef Q_OS_ANDROID
    setWindowFlags(Qt::FramelessWindowHint);
    QScrollArea* scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    setCentralWidget(scrollArea);
    scrollArea->setWidget(mTabWidget);
#endif
#endif

    setWindowIcon(QIcon(":/Resources/Images/Logo.png"));

    initMenuBar();
//    initNav();
    initTreeLeft();
#if 0
    initStatusBar();
#endif
}

MainWindow::~MainWindow() = default;

void MainWindow::initMenuBar()
{
    QMenuBar* menuBar = this->menuBar();
//    initFileMenu();
    initToolMenu();
    initOptionMenu();
    initLanguageMenu();
//    initLinksMenu();
//    initHelpMenu();
//    initSettingMenu();
    // 创建 QLabel 显示日期时间
    QLabel* dateTimeLabel = new QLabel(this);
    dateTimeLabel->setAlignment(Qt::AlignRight); // 右对齐
    dateTimeLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    dateTimeLabel->setMinimumHeight(menuBar->height());
    dateTimeLabel->setMaximumHeight(menuBar->height());

    // 更新日期时间
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [dateTimeLabel]() {
        dateTimeLabel->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    });
    timer->start(1000); // 每秒更新一次

    // 将日期时间 QLabel 添加到菜单栏
    menuBar->setCornerWidget(dateTimeLabel, Qt::TopRightCorner);
}

#ifdef Q_OS_WIN
void MainWindow::closeEvent(QCloseEvent* event)
{
    if (xToolsSettings::instance()->value(m_settingsKey.exitToSystemTray).toBool()) {
        close();
        event->ignore();
        return;
    }

    QMainWindow::closeEvent(event);
}
#endif

void MainWindow::initFileMenu()
{
    // Tool box
    auto* windowMenu = new QMenu(tr("New Window"), this);
    m_fileMenu->addMenu(windowMenu);
    QList<int> toolTypeList = xToolsToolBoxUi::supportedCommunicationTools();
    for (auto& toolType : toolTypeList) {
        const QString name = xToolsToolBoxUi::communicationToolName(toolType);
        auto* action = new QAction(name, this);
        windowMenu->addAction(action);
        connect(action, &QAction::triggered, this, [=]() {
            auto* w = new xToolsToolBoxUi();
            w->setContentsMargins(0, 0, 0, 0);
            w->setAttribute(Qt::WA_DeleteOnClose, true);
            w->initialize(toolType);
            w->adjustSize();
            w->show();
        });
    }

    // Other tools
#ifdef X_TOOLS_ENABLE_MODULE_SERIALBUS
#ifdef X_TOOLS_ENABLE_MODULE_MODBUS
    auto* modbusAction = new QAction("Modbus", this);
    connect(modbusAction, &QAction::triggered, this, [=]() {
        auto* w = new xToolsModbusStudioUi();
        w->setContentsMargins(9, 9, 9, 9);
        w->setAttribute(Qt::WA_DeleteOnClose, true);
        w->resize(1024, 480);
        w->show();
    });
    windowMenu->addAction(modbusAction);
#endif
#ifdef X_TOOLS_ENABLE_MODULE_CANBUS
    auto* canBusAction = new QAction("CAN Bus", this);
    connect(canBusAction, &QAction::triggered, this, [=]() {
        auto* w = new xToolsCanBusStudioUi();
        w->setContentsMargins(9, 9, 9, 9);
        w->setAttribute(Qt::WA_DeleteOnClose, true);
        w->resize(1024, 480);
        w->show();
    });
    windowMenu->addAction(canBusAction);
#endif
#endif

    m_fileMenu->addSeparator();
    m_fileMenu->addAction(m_exitAction);
}

void MainWindow::initSettingMenu()
{
    // Tool box
    auto* windowMenu = new QMenu(tr("Setting"), this);
    m_fileMenu->addMenu(windowMenu);
    QList<int> toolTypeList = xToolsToolBoxUi::supportedCommunicationTools();
    for (auto& toolType : toolTypeList) {
        const QString name = xToolsToolBoxUi::communicationToolName(toolType);
        auto* action = new QAction(name, this);
        windowMenu->addAction(action);
        connect(action, &QAction::triggered, this, [=]() {
            auto* w = new xToolsToolBoxUi();
            w->setContentsMargins(0, 0, 0, 0);
            w->setAttribute(Qt::WA_DeleteOnClose, true);
            w->initialize(toolType);
            w->adjustSize();
            w->show();
        });
    }

// Other tools
#ifdef X_TOOLS_ENABLE_MODULE_SERIALBUS
#ifdef X_TOOLS_ENABLE_MODULE_MODBUS
    auto* modbusAction = new QAction("Modbus", this);
    connect(modbusAction, &QAction::triggered, this, [=]() {
        auto* w = new xToolsModbusStudioUi();
        w->setContentsMargins(9, 9, 9, 9);
        w->setAttribute(Qt::WA_DeleteOnClose, true);
        w->resize(1024, 480);
        w->show();
    });
    windowMenu->addAction(modbusAction);
#endif
#ifdef X_TOOLS_ENABLE_MODULE_CANBUS
    auto* canBusAction = new QAction("CAN Bus", this);
    connect(canBusAction, &QAction::triggered, this, [=]() {
        auto* w = new xToolsCanBusStudioUi();
        w->setContentsMargins(9, 9, 9, 9);
        w->setAttribute(Qt::WA_DeleteOnClose, true);
        w->resize(1024, 480);
        w->show();
    });
    windowMenu->addAction(canBusAction);
#endif
#endif

    m_fileMenu->addSeparator();
    m_fileMenu->addAction(m_exitAction);
}

void MainWindow::initToolMenu()
{
#ifdef X_TOOLS_ENABLE_MODULE_ASSISTANTS
    auto* toolMenu = new QMenu(tr("&Tools"));
    menuBar()->insertMenu(m_languageMenu->menuAction(), toolMenu);

    for (auto& type : SAKAssistantsFactory::instance()->supportedAssistants()) {
        QString name = SAKAssistantsFactory::instance()->assistantName(type);
        auto* action = new QAction(name, this);
        QWidget* assistant = SAKAssistantsFactory::instance()->newAssistant(type);

        Q_ASSERT_X(assistant, __FUNCTION__, "A null assistant widget!");

        assistant->hide();
        toolMenu->addAction(action);
        connect(action, &QAction::triggered, this, [=]() {
            if (assistant->isHidden()) {
                assistant->show();
            } else {
                assistant->activateWindow();
            }
        });
    }
#endif
}

void MainWindow::initOptionMenu()
{
    auto* mainWindowMenu = new QMenu(tr("Main Window"), this);
    auto* action = new QAction(tr("Exit to System Tray"), this);
    action->setCheckable(true);
    mainWindowMenu->addAction(action);
    m_optionMenu->addSeparator();
    m_optionMenu->addMenu(mainWindowMenu);

    QVariant v = xToolsSettings::instance()->value(m_settingsKey.exitToSystemTray);
    if (!v.isNull()) {
        bool isExitToSystemTray = v.toBool();
        action->setChecked(isExitToSystemTray);
    }

    connect(action, &QAction::triggered, this, [=]() {
        bool keep = action->isChecked();
        xToolsSettings::instance()->setValue(m_settingsKey.exitToSystemTray, keep);
    });
}

void MainWindow::initLanguageMenu() {}

void MainWindow::initHelpMenu()
{
    m_helpMenu->addSeparator();
    m_helpMenu->addAction(tr("Get Sources from Github"), this, []() {
        QDesktopServices::openUrl(QUrl(X_TOOLS_GITHUB_REPOSITORY_URL));
    });
    m_helpMenu->addAction(tr("Get Sources from Gitee"), this, []() {
        QDesktopServices::openUrl(QUrl(X_TOOLS_GITEE_REPOSITORY_URL));
    });
    m_helpMenu->addSeparator();
#if 0
    m_helpMenu->addAction(tr("About xTools"), this, &MainWindow::aboutSoftware);
#endif
#ifndef X_TOOLS_BUILD_FOR_STORE
#ifdef Q_OS_WIN
    m_helpMenu->addAction(QIcon(":/Resources/Icons/IconBuy.svg"),
                          tr("Buy Ultimate Edition"),
                          this,
                          []() {
                              QUrl url("https://www.microsoft.com/store/apps/9P29H1NDNKBB");
                              QDesktopServices::openUrl(url);
                          });
#endif
#endif
    m_helpMenu->addSeparator();
    m_helpMenu->addAction(tr("Release History"), this, &MainWindow::showHistory);
    m_helpMenu->addAction(tr("Join in QQ Group"), this, &MainWindow::showQrCode);
}

void MainWindow::initLinksMenu()
{
    auto* linksMenu = new QMenu(tr("Links"), this);
    menuBar()->insertMenu(m_helpMenu->menuAction(), linksMenu);

    struct Link
    {
        QString name;
        QString url;
        QString iconPath;
    };
    QList<Link> linkList;
    linkList << Link{tr("Qt Official Download"),
                     QString("http://download.qt.io/official_releases/qt"),
                     QString(":/resources/images/Qt.png")}
             << Link{tr("Qt Official Blog"),
                     QString("https://www.qt.io/blog"),
                     QString(":/resources/images/Qt.png")}
             << Link{tr("Qt Official Release"),
                     QString("https://wiki.qt.io/Qt_5.15_Release"),
                     QString(":/resources/images/Qt.png")}
             << Link{QString(""), QString(""), QString("")}
             << Link{tr("Download xTools from Github"),
                     QString("%1/releases").arg(X_TOOLS_GITHUB_REPOSITORY_URL),
                     QString(":/Resources/Icons/GitHub.svg")}
             << Link{tr("Download xTools from Gitee"),
                     QString("%1/releases").arg(X_TOOLS_GITEE_REPOSITORY_URL),
                     QString(":/Resources/Icons/Gitee.svg")}
             << Link{QString(""), QString(""), QString("")}
             << Link{tr("Office Web Site"),
                     QString("https://qsaker.gitee.io/qsak/"),
                     QString(":/Resources/Images/I18n.png")};

    for (auto& var : linkList) {
        if (var.url.isEmpty()) {
            linksMenu->addSeparator();
            continue;
        }

        auto* action = new QAction(var.name, this);
        action->setObjectName(var.url);
        linksMenu->addAction(action);

        connect(action, &QAction::triggered, this, [=]() {
            QDesktopServices::openUrl(QUrl(sender()->objectName()));
        });
    }
}

void MainWindow::initTreeLeft()
{
    maincontrol* w = new maincontrol(this);
    w->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    setCentralWidget(w);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0); // 设置0边距
    // 每次获取 widget 时都进行连接
    connect(networkWidget, &QStackedWidget::currentChanged, this, [this, w](int index) {
        SelectParameters* selectparametersWidget = qobject_cast<SelectParameters*>(networkWidget->widget(index));
        if (selectparametersWidget) {
            QObject::connect(selectparametersWidget, &SelectParameters::switchToMainWindow, w, [=]{
                networkWidget->hide();
                w->refreshTree();
            });
        }
    });
    w->show();
//    QTreeWidget *treeWidget = new QTreeWidget(this);
//    treeWidget->resize(200, 1000); // 设置控件大小为400x300
//    treeWidget->move(0, 30);  // 设置控件在窗口中的位置为(100, 100)
//    // 设置QTreeWidget的列数
//    treeWidget->setColumnCount(1);
//    // 设置QTreeWidget标题隐藏
//    treeWidget->setHeaderHidden(true);
//    //添加根目录
//    //初始化就是treeWidget
//    QTreeWidgetItem * root1=new QTreeWidgetItem(treeWidget);
//    root1->setText(0,"场景1");
//    QTreeWidgetItem * root2=new QTreeWidgetItem(treeWidget);
//    root2->setText(0,"场景2");
//    //添加为顶层目录，也就是添加成根目录
//    treeWidget->addTopLevelItem(root1);
//    //添加子目录
//    //子目录添加到父目录
//    QStringList list={"网络1"};
//    for(int i=0;i<list.count();i++)
//    {
//        //root1初始化为父目录
//        QTreeWidgetItem* item=new QTreeWidgetItem(root1);
//        item->setText(0,list[i]);
//        root1->addChild(item);
//    }
//    //添加二级目录
//    auto child=root1->child(0);
//    QStringList list2={"模拟器1","模拟器2"};
//    for(int i=0;i<list2.count();i++)
//    {
//        //child初始化为父目录
//        QTreeWidgetItem* item=new QTreeWidgetItem(child);
//        item->setText(0,list2[i]);
//        root1->addChild(item);
//    }
//    // 展开QTreeWidget的所有节点
//    treeWidget->expandAll();
//    //QTreeWidget* tree 为树 tree 创建信号槽，鼠标press时会触发对应的信号。
//    connect(treeWidget, &QTreeWidget::itemPressed, this, &MainWindow::onRightButtonClicked);
}

void MainWindow::onRightButtonClicked(QTreeWidgetItem* item)
{
    if(qApp->mouseButtons() == Qt::RightButton) // 只针对鼠标右键
    {
        QTreeWidgetItem* p1 = item->parent();
        if(p1 == NULL || p1->parent() == NULL) {
            QTreeWidget* tree = item->treeWidget(); // 获取当前item所在的QTreeWidget
            // [option] 此处可以添加条件来只针对指定的QTreeWidgetItem来添加右键菜单功能。
            QMenu* menu = new QMenu(tree);
            QAction* action1 = new QAction("新增");
            QAction* action2 = new QAction("删除");
            menu->addAction(action1);
            menu->addAction(action2);
            // 为右键菜单上的QAction创建信号槽，添加对应的功能
            //        connect(action1, &QAction::triggered, this, [ = ]
            //        {
            //            QMessageBox::warning(this, "Action", "Open folder");
            //        });

            //        connect(action2, &QAction::triggered, this, [ = ]
            //        {
            //            QMessageBox::warning(this, "Action", "edit file");
            //        });
            // 右键菜单在鼠标点击的位置显示
            menu->exec(QCursor::pos());
        }
    }
}

void MainWindow::initNav()
{
    auto* tb = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea, tb);
    tb->setFloatable(false);
    tb->setMovable(false);
    tb->setOrientation(Qt::Vertical);
    tb->setAllowedAreas(Qt::LeftToolBarArea);

    static QButtonGroup btGroup;
    QList<int> types = xToolsToolBoxUi::supportedCommunicationTools();
    for (int i = 0; i < types.count(); i++) {
        int type = types.at(i);
        auto* toolBoxUi = new xToolsToolBoxUi(this);
        toolBoxUi->initialize(type);

        auto icon = xToolsApplication::cookedIcon(toolBoxUi->windowIcon());
        initNav({&btGroup, icon, toolBoxUi->windowTitle(), toolBoxUi, tb});
    }

    tb->addSeparator();
    initNavStudio(&btGroup, tb);
    auto* lb = new QLabel(" ");
    tb->addWidget(lb);
    lb->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    intNavControlButton(&btGroup, tb);
}

void MainWindow::initNavStudio(QButtonGroup* buttonGroup, QToolBar* toolBar)
{
    Q_UNUSED(buttonGroup)
    Q_UNUSED(toolBar)
#ifdef X_TOOLS_ENABLE_MODULE_SERIALBUS
#ifdef X_TOOLS_ENABLE_MODULE_MODBUS
    auto modbusIcon = xToolsApplication::cookedIcon(QIcon(":/Resources/Icons/IconModbus.svg"));
    initNav({buttonGroup, modbusIcon, tr("Modbus Studio"), new xToolsModbusStudioUi(this), toolBar});
#endif
#ifdef X_TOOLS_ENABLE_MODULE_CANBUS
    auto canIcon = xToolsApplication::cookedIcon(QIcon(":/Resources/Icons/IconCanBus.svg"));
    initNav({buttonGroup, canIcon, tr("CANBus Studio"), new xToolsCanBusStudioUi(this), toolBar});
#endif
#endif
}

void MainWindow::initNav(const NavContext& ctx)
{
    const QString key = m_settingsKey.isTextBesideIcon;
    bool isTextBesideIcon = xToolsSettings::instance()->value(key).toBool();
    auto style = isTextBesideIcon ? Qt::ToolButtonTextBesideIcon : Qt::ToolButtonIconOnly;
    auto* bt = new QToolButton();
    bt->setAutoRaise(true);
    bt->setIcon(ctx.icon);
    bt->setCheckable(true);
    bt->setToolButtonStyle(style);
    bt->setToolTip(ctx.name);
    bt->setText(" " + ctx.name);
    bt->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
#if 0
    bt->setIconSize(QSize(32, 32));
#endif
    ctx.bg->addButton(bt);
    ctx.tb->addWidget(bt);

    if (ctx.page->layout()) {
        ctx.page->layout()->setContentsMargins(4, 4, 4, 4);
    }
    auto stackedWidget = qobject_cast<QStackedWidget*>(centralWidget());
    stackedWidget->addWidget(ctx.page);

    auto pageCount = ctx.bg->buttons().count();
    QObject::connect(bt, &QToolButton::clicked, bt, [=]() {
        stackedWidget->setCurrentIndex(int(pageCount) - 1);
        xToolsSettings::instance()->setValue(m_settingsKey.pageIndex, pageCount - 1);
    });

    if (xToolsSettings::instance()->value(m_settingsKey.pageIndex).toInt() == (pageCount - 1)) {
        bt->setChecked(true);
        stackedWidget->setCurrentIndex(int(pageCount) - 1);
    }
}

void MainWindow::intNavControlButton(QButtonGroup* buttonGroup, QToolBar* toolBar)
{
    toolBar->addSeparator();
    const QString key = m_settingsKey.isTextBesideIcon;
    bool isTextBesideIcon = xToolsSettings::instance()->value(key).toBool();
    auto style = isTextBesideIcon ? Qt::ToolButtonTextBesideIcon : Qt::ToolButtonIconOnly;
    auto* tbt = new QToolButton(this);
    const QString path = ":/Resources/Icons/IconListWithIcon.svg";
    tbt->setIcon(xToolsApplication::cookedIcon(QIcon(path)));
    tbt->setText(" " + tr("Show Icon Only"));
    tbt->setToolTip(tr("Click to show(hide) nav text"));
    tbt->setAutoRaise(true);
    tbt->setToolButtonStyle(style);
    tbt->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    toolBar->addWidget(tbt);
    connect(tbt, &QToolButton::clicked, tbt, [=]() {
        const QString key = m_settingsKey.isTextBesideIcon;
        bool checked = xToolsSettings::instance()->value(key).toBool();
        checked = !checked;
        auto bts = buttonGroup->buttons();
        auto style = checked ? Qt::ToolButtonTextBesideIcon : Qt::ToolButtonIconOnly;
        tbt->setToolButtonStyle(style);
        for (auto& bt : bts) {
            auto cookedBt = qobject_cast<QToolButton*>(bt);

            cookedBt->setToolButtonStyle(style);
        }
        xToolsSettings::instance()->setValue(key, checked);
    });
}

void MainWindow::initStatusBar()
{
    statusBar()->showMessage("Hello world", 10 * 1000);
}

void MainWindow::showHistory()
{
    QDialog dialog;
    dialog.setModal(true);
    dialog.setWindowTitle(tr("Release History"));
    dialog.resize(600, 400);

    auto* textBrowser = new QTextBrowser(&dialog);
    QFile file(":/Resources/Files/History.txt");
    if (file.open(QFile::ReadOnly)) {
        QByteArray data = file.readAll();
        textBrowser->setText(QString::fromUtf8(data));
    }

    auto* layout = new QHBoxLayout(&dialog);
    layout->addWidget(textBrowser);
    dialog.setLayout(layout);
    dialog.show();
    dialog.exec();
}

void MainWindow::showQrCode()
{
    QDialog dialog;
    dialog.setWindowTitle(tr("QR Code"));

    struct QrCodeInfo
    {
        QString title;
        QString qrCode;
    };
    QList<QrCodeInfo> qrCodeInfoList;

    qrCodeInfoList << QrCodeInfo{tr("User QQ Group"), QString(":/Resources/Images/QSAKQQ.jpg")}
                   << QrCodeInfo{tr("Qt QQ Group"), QString(":/Resources/Images/QtQQ.jpg")};

    auto* tabWidget = new QTabWidget(&dialog);
    for (auto& var : qrCodeInfoList) {
        auto* label = new QLabel(tabWidget);
        label->setPixmap(QPixmap::fromImage(QImage(var.qrCode)));
        tabWidget->addTab(label, var.title);
    }

    auto* layout = new QHBoxLayout(&dialog);
    layout->addWidget(tabWidget);
    dialog.setLayout(layout);
    dialog.setModal(true);
    dialog.show();
    dialog.exec();
}
