cmake_minimum_required(VERSION 3.5)

project(cmake_test)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加Qt模块
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)

# 添加子目录
add_subdirectory(src)
