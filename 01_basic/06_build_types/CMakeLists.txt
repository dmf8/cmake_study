cmake_minimum_required(VERSION 3.5)
project(build_type)

# if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
#   message("Setting build type to 'RelWithDebInfo' as none was specified.")
#   set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build." FORCE)
#   # Set the possible values of build type for cmake-gui
#   set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
#     "MinSizeRel" "RelWithDebInfo")
# endif()

add_executable(${PROJECT_NAME} build_type.cpp)

