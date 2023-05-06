cmake_minimum_required(VERSION 3.5)
project(test_lib)

add_library(${PROJECT_NAME} SHARED src/test_lib.cpp)
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/lib
)
install(DIRECTORY ${PROJECT_SOURCE_DIR}/inc ${PROJECT_SOURCE_DIR}/src
    DESTINATION ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}
)
install(FILES CMakeLists.txt pro_link.cmake
    DESTINATION ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}
)
