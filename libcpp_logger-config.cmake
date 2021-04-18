if (TARGET libcpp_logger::libcpp_logger)
    return()
endif()

add_library(libcpp_logger::libcpp_logger INTERFACE IMPORTED)
target_include_directories(libcpp_logger::libcpp_logger
        INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include)