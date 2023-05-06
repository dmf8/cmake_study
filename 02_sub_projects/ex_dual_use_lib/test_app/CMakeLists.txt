cmake_minimum_required(VERSION 3.5)
project(test_app)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main.cpp)
# include(${PROJECT_SOURCE_DIR}/../test_lib/test_lib/pro_link.cmake)
target_link_libraries(${PROJECT_NAME} test_lib)