cmake_minimum_required(VERSION 4.0.0)
project(hello_window VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(hello_window
 src/config.h
 src/main.cpp
 src/glad.c)


target_link_libraries(hello_window PRIVATE glfw OpenGL::GL)

target_include_directories(hello_window PRIVATE dependencies)
