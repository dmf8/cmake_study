cmake_minimum_required(VERSION 3.5)
project(sub_dirs)

add_subdirectory(execution)
add_subdirectory(static_lib)
add_subdirectory(header_lib)

# message(-----------------------)
# message("top project name " ${CMAKE_PROJECT_NAME})
# message("exec dir " ${exec_SOURCE_DIR})
# message("static lib dir " ${lib_a_SOURCE_DIR})
# message("header lib dir " ${lib_h_SOURCE_DIR})
# message(-----------------------)
