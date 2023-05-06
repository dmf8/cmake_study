find_library(TEST_LIB img_io ${CMAKE_CURRENT_SOURCE_DIR}/lib)

if (TEST_LIB)
    target_include_directories(
        ${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/img_io/inc
    )

    # target_link_libraries(
    #     ${PROJECT_NAME}
    #     ${TEST_LIB}
    # )
endif()

