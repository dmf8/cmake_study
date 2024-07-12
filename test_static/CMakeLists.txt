cmake_minimum_required(VERSION 3.5)
project(test_scope)

add_executable(${PROJECT_NAME} src/main.cpp src/Class1.cpp src/Class2.cpp src/common.cpp)
# add_executable(${PROJECT_NAME} src/main.cpp src/Class1.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/inc)