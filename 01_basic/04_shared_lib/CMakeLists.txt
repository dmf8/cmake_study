cmake_minimum_required(VERSION 3.5)
project(hello_shared_lib)

set(LIB_NAME hello_d)
add_library(${LIB_NAME} SHARED src/Hello.cpp)

target_include_directories(
    ${LIB_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)

add_library(aaa ALIAS ${LIB_NAME})
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} aaa)