cmake_minimum_required(VERSION 4.0.0)
project(hello_window VERSION 1.0.0)

add_executable(hello_window src/main.cpp)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

target_link_libraries(hello_window PRIVATE glfw OpenGL::GL)

target_include_directories(hello_window PRIVATE dependencies)
