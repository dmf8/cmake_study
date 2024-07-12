find_library(TEST_LIB img_io ${PROJECT_SOURCE_DIR}/lib)

if (TEST_LIB)
    # message(${CMAKE_CURRENT_SOURCE_DIR})
    target_include_directories(
        ${PROJECT_NAME}
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc
    )
    target_link_libraries(
        ${PROJECT_NAME}
        ${TEST_LIB}
    )
endif()