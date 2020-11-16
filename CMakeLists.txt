cmake_minimum_required(VERSION "3.18")

project(Clarity)

find_package( OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB SOURCES
        headers/*.h
        sources/*.cpp)

add_executable(Clarity Main.cpp  ${SOURCES}) 

target_link_libraries(Clarity ${OpenCV_LIBS})