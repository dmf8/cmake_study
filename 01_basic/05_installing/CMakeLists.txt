cmake_minimum_required(VERSION 3.5)
project(hello_install)

set(LIB_NAME hello)
add_library(${LIB_NAME} SHARED src/Hello.cpp)

target_include_directories(
    ${LIB_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${LIB_NAME})

set(CMAKE_INSTALL_PREFIX test_install)

install(TARGETS ${PROJECT_NAME}
    DESTINATION bin
)

install(TARGETS ${LIB_NAME}
    LIBRARY DESTINATION lib
)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/inc
    DESTINATION .
)

install(FILES cmake-examples.conf
    DESTINATION etc
)