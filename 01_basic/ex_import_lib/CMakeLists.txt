cmake_minimum_required(VERSION 3.12)
project(test)

add_executable(${PROJECT_NAME} test.cpp)

add_subdirectory(test_lib)

target_link_libraries(
	${PROJECT_NAME} test_lib::lib
)

