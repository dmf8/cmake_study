cmake_minimum_required(VERSION 3.12)
project(test)

add_executable(${PROJECT_NAME} test.cpp)

add_subdirectory(test_lib)

message(${PROJECT_SOURCE_DIR}/test_lib/inc)

target_link_libraries(
	${PROJECT_NAME}
	${PROJECT_SOURCE_DIR}/test_lib/inc
)

