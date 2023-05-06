cmake_minimum_required(VERSION 3.5)
project(hello_cmake)

set(SRCS hello.cpp)
add_compile_options("-g")

add_executable(${PROJECT_NAME} ${SRCS})