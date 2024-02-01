# 添加每个模块的子目录
add_subdirectory(module1)
add_subdirectory(module2)
# ...

# 设置主项目的源文件
set(SOURCES main.cpp)

# 创建可执行文件
add_executable(cmake_test ${SOURCES})

# 链接Qt模块
target_link_libraries(cmake_test Qt5::Core Qt5::Gui Qt5::Widgets)

# 链接每个模块的库
target_link_libraries(cmake_test Module1 Module2)
# ...
