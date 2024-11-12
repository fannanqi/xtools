# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_BUNDLE "OFF")
set(CPACK_BINARY_DEB "OFF")
set(CPACK_BINARY_DRAGNDROP "OFF")
set(CPACK_BINARY_FREEBSD "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "OFF")
set(CPACK_BINARY_PRODUCTBUILD "OFF")
set(CPACK_BINARY_RPM "OFF")
set(CPACK_BINARY_STGZ "ON")
set(CPACK_BINARY_TBZ2 "OFF")
set(CPACK_BINARY_TGZ "ON")
set(CPACK_BINARY_TXZ "OFF")
set(CPACK_BUILD_SOURCE_DIRS "/Users/apple/Desktop/x-tools-6.0.1;/Users/apple/Desktop/x-tools-6.0.1/build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENT_DOCUMENTATION_DESCRIPTION "Documentation generated for the library")
set(CPACK_COMPONENT_DOCUMENTATION_DISPLAY_NAME "Documentation")
set(CPACK_COMPONENT_EXAMPLES_DESCRIPTION "Sample applications using the library")
set(CPACK_COMPONENT_EXAMPLES_DISPLAY_NAME "Examples")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/Applications/CMake.app/Contents/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "xTools built using CMake")
set(CPACK_GENERATOR "STGZ;TGZ")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALL_CMAKE_PROJECTS "/Users/apple/Desktop/x-tools-6.0.1/build;xTools;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "QMdnsEngine")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "QMdnsEngine")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJDUMP_EXECUTABLE "/usr/bin/objdump")
set(CPACK_OSX_SYSROOT "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.2.sdk")
set(CPACK_OUTPUT_CONFIG_FILE "/Users/apple/Desktop/x-tools-6.0.1/build/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/Applications/CMake.app/Contents/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "xTools built using CMake")
set(CPACK_PACKAGE_FILE_NAME "xTools-0.2.0-Darwin")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "QMdnsEngine")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "QMdnsEngine")
set(CPACK_PACKAGE_NAME "xTools")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Nathan Osman")
set(CPACK_PACKAGE_VERSION "0.2.0")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "2")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_RESOURCE_FILE_LICENSE "/Applications/CMake.app/Contents/share/cmake-3.28/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/Applications/CMake.app/Contents/share/cmake-3.28/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/Applications/CMake.app/Contents/share/cmake-3.28/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/apple/Desktop/x-tools-6.0.1/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Darwin")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Darwin")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/apple/Desktop/x-tools-6.0.1/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()