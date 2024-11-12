# Install script for directory: /Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/libqmdnsengine.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmdnsengine.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmdnsengine.a")
    execute_process(COMMAND "/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqmdnsengine.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qmdnsengine" TYPE FILE FILES
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/abstractserver.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/bitmap.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/browser.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/cache.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/dns.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/hostname.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/mdns.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/message.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/prober.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/provider.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/query.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/record.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/resolver.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/server.h"
    "/Users/apple/Desktop/x-tools-6.0.1/ThirdParty/qmdnsengine-master/src/include/qmdnsengine/service.h"
    "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/qmdnsengine_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake"
         "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "/Users/apple/Desktop/x-tools-6.0.1/build/ThirdParty/qmdnsengine-master/src/qmdnsengineConfigVersion.cmake")
endif()

