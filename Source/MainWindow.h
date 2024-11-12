/***************************************************************************************************
 * Copyright 2018-2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#pragma once

#include <QButtonGroup>
#include <QMetaEnum>
#include <QtWidgets/QTreeWidget>

#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
#include "xToolsPrivateMainWindow.h"
#else
#include "xToolsMainWindow.h"
#endif

#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
class MainWindow : public xToolsPrivateMainWindow
#else
class MainWindow : public xToolsMainWindow
#endif
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = Q_NULLPTR);
    ~MainWindow() override;

#ifdef Q_OS_WIN
protected:
    void closeEvent(QCloseEvent* event) override;
#endif

private:
    struct SettingsKeyContext
    {
        const QString isTextBesideIcon{"MainWindow/isTextBesideIcon"};
        const QString pageIndex{"MainWindow/pageIndex"};
        const QString exitToSystemTray{"MainWindow/exitToSystemTray"};
    } m_settingsKey;
    struct NavContext
    {
        QButtonGroup* bg;
        QIcon icon;
        QString name;
        QWidget* page;
        QToolBar* tb;
    };

private:
    void initMenuBar();
    void initFileMenu();
    void initToolMenu();
    void initOptionMenu();
    void initLanguageMenu();
    void initHelpMenu();
    void initSettingMenu();
    void initLinksMenu();
    void initTreeLeft();
    void onRightButtonClicked(QTreeWidgetItem* item);
    void initNav();
    void initNavStudio(QButtonGroup* buttonGroup, QToolBar* toolBar);
    void initNav(const NavContext& ctx);
    void intNavControlButton(QButtonGroup* buttonGroup, QToolBar* toolBar);
    void initStatusBar();

    static void showHistory();
    static void showQrCode();
};
