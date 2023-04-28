cmake_minimum_required(VERSION 3.5)
project(test)

add_executable(${PROJECT_NAME} test.cpp)
add_subdirectory(img_io)
# find_library(TEST_LIB img_io ${PROJECT_SOURCE_DIR}/img_io/lib)

# target_include_directories(
#     ${PROJECT_NAME}
#     PUBLIC ${PROJECT_SOURCE_DIR}/img_io/inc
# )

if (TEST_LIB)
    target_link_libraries(
        ${PROJECT_NAME}
        ${TEST_LIB}
    )
endif()
