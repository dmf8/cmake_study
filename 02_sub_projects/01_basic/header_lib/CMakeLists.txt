project(lib_h)

add_library(${PROJECT_NAME} INTERFACE)
add_library(sub::libh ALIAS ${PROJECT_NAME})

# target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/inc)
target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/inc)