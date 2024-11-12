#include "xlinktablemodeltoolui.h"
#include "ui_xlinktablemodeltoolui.h"

#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QJsonArray>
#include <QJsonDocument>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QToolBar>

#include "xToolsApplication.h"
#include "xToolsMenu.h"
#include "xToolsSettings.h"
#include "xToolsTableModelTool.h"

xLinkTableModelToolUi::xLinkTableModelToolUi(QWidget *parent) :
    xToolsBaseToolUi(parent),
    ui(new Ui::xLinkTableModelToolUi)
{
    ui->setupUi(this);
    auto* tb = new QToolBar(this);
    QHeaderView *vHeaderView = ui->tableView->verticalHeader();
    vHeaderView->hide();

    connect(ui->pushButtonEdit,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonEditClicked);
    connect(ui->pushButtonClear,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonClearClicked);
    connect(ui->pushButtonDelete,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonDeleteClicked);
    connect(ui->pushButtonImport,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonImportClicked);
    connect(ui->pushButtonExport,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonExportClicked);
    connect(ui->pushButtonAppend,
            &QPushButton::clicked,
            this,
            &xLinkTableModelToolUi::onPushButtonAppendClicked);

    connect(ui->tableView, &QTableView::doubleClicked, this, [=](const QModelIndex &index) {
        Q_UNUSED(index)
        onPushButtonEditClicked();
    });
}

xLinkTableModelToolUi::~xLinkTableModelToolUi()
{
    delete ui;
}

void xLinkTableModelToolUi::setStretchSections(QList<int> columns)
{
    QTableView *tableView = ui->tableView;
    QHeaderView *headerView = tableView->horizontalHeader();
    for (int &column : columns) {
        headerView->setSectionResizeMode(column, QHeaderView::Stretch);
    }
}

void xLinkTableModelToolUi::setSectionResizeModeToStretch()
{
    QTableView *tableView = ui->tableView;
    QHeaderView *headerView = tableView->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
}

void xLinkTableModelToolUi::setColumnVisible(int column, bool visible)
{
    QTableView *tableView = ui->tableView;
    if (visible) {
        tableView->showColumn(column);
    } else {
        tableView->hideColumn(column);
    }
}

void xLinkTableModelToolUi::onBaseToolUiInitialized(xToolsBaseTool *tool,
                                                     const QString &settingGroup)
{
    if (!tool) {
        qWarning() << "The value of tool is nullptr!";
        return;
    }

    if (!tool->inherits("xToolsTableModelTool")) {
        qWarning() << "The tool does not inherits xToolsTableModelTool!";
        return;
    }

    m_TableModelTool = dynamic_cast<xToolsTableModelTool *>(tool);
    Q_ASSERT_X(m_TableModelTool, Q_FUNC_INFO, "The tool is not xToolsTableModelTool!");

    mTableModel = m_TableModelTool->tableModel().value<QAbstractTableModel *>();
    QTableView *tableView = ui->tableView;
    QHeaderView *headerView = tableView->horizontalHeader();
    int columnCount = mTableModel->columnCount();
    QStringList headers;
    QStringList rawHeaders;
    for (int i = 0; i < columnCount; i++) {
        auto orientation = Qt::Orientation::Horizontal;
        QString str = mTableModel->headerData(i, orientation).toString();
        rawHeaders.append(str);
        str = m_TableModelTool->cookHeaderString(str);
        headers.append(str);
    }

    QStandardItemModel *headerViewModel = new QStandardItemModel(headerView);

    tableView->setHorizontalHeader(headerView);
    tableView->setModel(mTableModel);

    headerViewModel->setColumnCount(headers.count());
    headerViewModel->setHorizontalHeaderLabels(headers);
    headerView->setModel(headerViewModel);

    m_menu = new xToolsMenu(ui->pushButtonVisible);
    ui->pushButtonVisible->setMenu(m_menu);
    auto settings = xToolsSettings::instance();
    auto hideColumns = defaultHideColumns();
    for (int i = 0; i < headers.count(); i++) {
        QAction *ret = m_menu->addAction(headers.at(i));
        connect(ret, &QAction::triggered, this, [=]() {
            if (ret->isChecked()) {
                tableView->showColumn(i);
            } else {
                tableView->hideColumn(i);
            }
            settings->setValue(settingGroup + "/" + rawHeaders.at(i), ret->isChecked());
        });
        ret->setCheckable(true);

        QVariant var = settings->value(settingGroup + "/" + rawHeaders.at(i));
        if (var.isValid()) {
            if (!var.toBool()) {
                tableView->hideColumn(i);
            }
            ret->setChecked(var.toBool());
        } else {
            if (hideColumns.contains(i)) {
                tableView->hideColumn(i);
                ret->setChecked(false);
            } else {
                ret->setChecked(true);
            }
        }
    }

    mItemsKey = settingGroup + "/items";
    QString items = settings->value(mItemsKey).toString();
    QByteArray json = QByteArray::fromHex(items.toLatin1());
    importFromJson(QJsonDocument::fromJson(json).toJson());
}

QList<int> xLinkTableModelToolUi::defaultHideColumns()
{
    QList<int> list;
    return list;
}

void xLinkTableModelToolUi::afterRowEdited(int row)
{
    Q_UNUSED(row)
}

void xLinkTableModelToolUi::clear()
{
    int rowCount = mTableModel->rowCount();
    mTableModel->removeRows(0, rowCount);
}

void xLinkTableModelToolUi::remove(const QModelIndex &index)
{
    if (index.isValid()) {
        mTableModel->removeRow(index.row());
    }
}

void xLinkTableModelToolUi::importFromJson(const QByteArray &json)
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(json);
    QJsonArray jsonArray = jsonDoc.array();
    for (int i = 0; i < jsonArray.count(); i++) {
        QJsonObject jsonObj = jsonArray.at(i).toObject();
        QJsonDocument jd;
        jd.setObject(jsonObj);
        QString item = QString::fromUtf8(jd.toJson());
        m_TableModelTool->addItem(item);
    }
}

QByteArray xLinkTableModelToolUi::exportAsJson()
{
    auto items = m_TableModelTool->itemsContext();
    QJsonArray jsonArray = items.toJsonArray();
    QJsonDocument jsonDoc;
    jsonDoc.setArray(jsonArray);
    QByteArray json = jsonDoc.toJson();
    return json;
}

void xLinkTableModelToolUi::edit(const QModelIndex &index)
{
    QVariant var = m_TableModelTool->itemContext(index.row());
    QJsonObject jsonObj = var.toJsonObject();
    QDialog *editor = itemEditor();
    QGenericReturnArgument ret;
    QMetaObject::invokeMethod(editor,
                              "setParameters",
                              Qt::DirectConnection,
                              ret,
                              Q_ARG(QJsonObject, jsonObj));
    qInfo() << "the parameter of setParameters() is:" << jsonObj;
    Q_UNUSED(ret);
    editor->show();

    if (QDialog::Accepted == editor->exec()) {
        QJsonObject params;
        QMetaObject::invokeMethod(editor,
                                  "parameters",
                                  Qt::DirectConnection,
                                  Q_RETURN_ARG(QJsonObject, params));
        qInfo() << "the parameter of parameters() is:" << params;
        QJsonDocument jsonDoc;
        jsonDoc.setObject(params);
        QString str = QString::fromUtf8(jsonDoc.toJson());
        m_TableModelTool->addItem(str, index.row());

        afterRowEdited(index.row());
    }
}

bool xLinkTableModelToolUi::append()
{
    QJsonObject jsonObj = m_TableModelTool->itemContext(-1).toJsonObject();
    QDialog *editor = itemEditor();
    QGenericReturnArgument ret;
    QMetaObject::invokeMethod(editor,
                              "setParameters",
                              Qt::DirectConnection,
                              ret,
                              Q_ARG(QJsonObject, jsonObj));
    qInfo() << "the parameter of setParameters() is:" << jsonObj;
    Q_UNUSED(ret);

    editor->show();
    if (!(QDialog::Accepted == editor->exec())) {
        return false;
    }

    QMetaObject::invokeMethod(editor,
                              "parameters",
                              Qt::DirectConnection,
                              Q_RETURN_ARG(QJsonObject, jsonObj));
    qInfo() << "the parameter of parameters() is:" << jsonObj;
    QJsonDocument jsonDoc;
    jsonDoc.setObject(jsonObj);
    QString str = QString::fromUtf8(jsonDoc.toJson());
    m_TableModelTool->addItem(str, -1);
    return true;
}

QModelIndex xLinkTableModelToolUi::currentIndex()
{
    QModelIndex index = ui->tableView->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(xToolsApplication::mainWindow(),
                             tr("Please Select an Item"),
                             tr("Please select an item first, then try again!"));
    }
    return index;
}

void xLinkTableModelToolUi::writeToSettingsFile()
{
    QByteArray json = exportAsJson();
    xToolsSettings::instance()->setValue(mItemsKey, QString::fromLatin1(json.toHex()));
}

bool xLinkTableModelToolUi::isInitialized()
{
    if (!m_TableModelTool) {
        QMessageBox::warning(xToolsApplication::mainWindow(),
                             tr("Invalid Parameter"),
                             tr("The value of mTableModelTool is nullptr,"
                                " you must called initialize() first!"));
        return false;
    }

    return true;
}

void xLinkTableModelToolUi::onPushButtonEditClicked()
{
    if (!isInitialized()) {
        return;
    }

    QModelIndex index = currentIndex();
    if (index.isValid()) {
        edit(index);
        writeToSettingsFile();
    }
}

void xLinkTableModelToolUi::onPushButtonClearClicked()
{
    if (!isInitialized()) {
        return;
    }

    int ret = QMessageBox::warning(xToolsApplication::mainWindow(),
                                   tr("Clear Data"),
                                   tr("The data will be empty from settings file, are you sure?"),
                                   QMessageBox::No | QMessageBox::Ok);
    if (ret == QMessageBox::Ok) {
        clear();
        writeToSettingsFile();
    }
}

void xLinkTableModelToolUi::onPushButtonDeleteClicked()
{
    if (!isInitialized()) {
        return;
    }

    int ret = QMessageBox::warning(xToolsApplication::mainWindow(),
                                   tr("Delete Data"),
                                   tr("The data will be delete from settings file, are you sure?"),
                                   QMessageBox::Cancel | QMessageBox::Ok);

    if (ret != QMessageBox::Ok) {
        return;
    }

    QModelIndex index = currentIndex();
    if (index.isValid()) {
        remove(index);
        writeToSettingsFile();
    }
}

void xLinkTableModelToolUi::onPushButtonImportClicked()
{
    if (!isInitialized()) {
        return;
    }

    QString fileName = QFileDialog::getOpenFileName(xToolsApplication::mainWindow(),
                                                    tr("Import data"),
                                                    ".",
                                                    tr("JSON (*.json);;All (*)"));
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (file.open(QFile::ReadOnly)) {
        QByteArray json = file.readAll();
        file.close();
        ;

        importFromJson(json);
        writeToSettingsFile();
    } else {
        qWarning() << "Can not open file:" << file.errorString();
    }
}

void xLinkTableModelToolUi::onPushButtonExportClicked()
{
    if (!isInitialized()) {
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(xToolsApplication::mainWindow(),
                                                    tr("Import data"),
                                                    ".",
                                                    tr("JSON (*.json);;All (*)"));
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (file.open(QFile::WriteOnly)) {
        QTextStream out(&file);
        out << exportAsJson();
        file.close();
    } else {
        qWarning() << "Can not open file:" << file.errorString();
    }
}

void xLinkTableModelToolUi::onPushButtonAppendClicked()
{
    if (!isInitialized()) {
        return;
    }

    if (append()) {
        writeToSettingsFile();
    }
}
