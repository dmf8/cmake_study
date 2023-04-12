cmake_minimum_required(VERSION 3.5)
project(hello_static_lib)

set(LIB_NAME hello_s)
add_library(${LIB_NAME} STATIC src/Hello.cpp)

target_include_directories(
    ${LIB_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${LIB_NAME})