add_library(img_io SHARED IMPORTED GLOBAL)
set_property(TARGET img_io 
    PROPERTY IMPORTED_LOCATION ${CMAKE_CURRENT_LIST_DIR}/lib/libimg_io.so
)

set_property(TARGET img_io 
    PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_LIST_DIR}/inc
)

target_link_libraries(${PROJECT_NAME} img_io)
