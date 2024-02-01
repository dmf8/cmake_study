# 设置模块名
set(MODULE_NAME Module1)

# 添加源文件
set(SOURCES module1.cpp)

# 创建库
add_library(${MODULE_NAME} ${SOURCES})

# 链接Qt模块
target_link_libraries(${MODULE_NAME} Qt5::Core Qt5::Gui Qt5::Widgets)
