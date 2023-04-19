cmake_minimum_required(VERSION 3.5)
project(test)

add_executable(${PROJECT_NAME} test.cpp)
find_library(TEST_LIB img_io ${PROJECT_SOURCE_DIR}/lib)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)

if (TEST_LIB)
    target_link_libraries(
        ${PROJECT_NAME}
        ${TEST_LIB}
    )
endif()
