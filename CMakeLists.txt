cmake_minimum_required(VERSION 3.5)

project(Memorize VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(PROJECT_RESOURCES
    resource/res.rc
)
set(PROJECT_HEADERS
    include/mainwindow.hpp
    include/AbstractWidget/abstractwidget.hpp
    include/FileManager/filemanager.hpp
    include/FileManager/filemanagerwidget.hpp
    include/SystemManager/systemmanager.hpp
    include/SystemManager/systemmanagerwidget.hpp
    include/Menu/menu.hpp
    include/Loader/loader.hpp
)
set(PROJECT_SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/AbstractWidget/abstractwidget.cpp
    src/FileManager/filemanager.cpp
    src/FileManager/filemanagerwidget.cpp
    src/SystemManager/systemmanager.cpp
    src/SystemManager/systemmanagerwidget.cpp
    src/Menu/menu.cpp
    src/Loader/loader.cpp
)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Memorize
        MANUAL_FINALIZATION
        ${PROJECT_HEADERS}
        ${PROJECT_SOURCES}
        ${PROJECT_RESOURCES}
    )

else()
    add_executable(Memorize
        ${PROJECT_HEADERS}
        ${PROJECT_SOURCES}
    )
endif()

target_link_libraries(Memorize PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
)

set_target_properties(Memorize PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Memorize
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Memorize)
endif()
