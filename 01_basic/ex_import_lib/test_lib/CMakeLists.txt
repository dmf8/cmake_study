
add_library(img_io SHARED IMPORTED GLOBAL)
set_property(TARGET img_io 
    PROPERTY IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/libimg_io.so ${CMAKE_CURRENT_SOURCE_DIR}/lib/libimg_mark.so
)

set_property(TARGET img_io 
    PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
add_library(test_lib::lib ALIAS img_io)