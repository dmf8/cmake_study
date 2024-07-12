add_library(img_mark SHARED IMPORTED GLOBAL)
set_property(TARGET img_mark 
    PROPERTY IMPORTED_LOCATION ${CMAKE_CURRENT_LIST_DIR}/lib/libimg_mark.so
)

set_property(TARGET img_mark 
    PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_LIST_DIR}/inc
)

target_link_libraries(${PROJECT_NAME} img_mark)
