project(lib_a)

add_library(${PROJECT_NAME} STATIC src/lib_a.cpp)
add_library(sub::liba ALIAS ${PROJECT_NAME})
target_include_directories(
    ${PROJECT_NAME} 
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)