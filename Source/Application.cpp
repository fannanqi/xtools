﻿/***************************************************************************************************
 * Copyright 2018-2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#include "Application.h"

#include <QFile>

#include "xToolsSettings.h"

Application::Application(int argc, char **argv)
#ifdef X_TOOLS_ENABLE_MODULE_PRIVATE
    : xToolsPrivateApplication(argc, argv)
#else
    : xToolsApplication(argc, argv)
#endif
{
    // Setup ui language.
    const QString language = xToolsSettings::instance()->language();
    setupLanguageWithPrefix(language, m_translatorPrefix);
    setupLanguageWithPrefix(language, m_translatorToolsPrefix);
    showSplashScreenMessage(tr("初始化主窗口"));//"Initializing main window..."));
}

void Application::setupLanguage(const QString &language)
{
    xToolsApplication::setupLanguage(language);
    setupLanguageWithPrefix(language, m_translatorPrefix);
    setupLanguageWithPrefix(language, m_translatorToolsPrefix);
}
