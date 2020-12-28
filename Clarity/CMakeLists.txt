cmake_minimum_required(VERSION 3.5)

project(Clarity LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package( OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
message("${OpenCV_INCLUDE_DIRS}")
file(GLOB SOURCES
        headers/*.h
        source/*.cpp)

if(BUILD_CLI)
    add_executable(Clarity_CLI CLI_Main.cpp  ${SOURCES})
    message("${OpenCV_LIBS}")
    target_link_libraries(Clarity_CLI ${OpenCV_LIBS})
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(Clarity_GUI SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${SOURCES}
  )
else()
  add_executable(Clarity_GUI
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${SOURCES}
  )
endif()

target_link_libraries(Clarity_GUI PRIVATE Qt5::Widgets ${OpenCV_LIBS})
