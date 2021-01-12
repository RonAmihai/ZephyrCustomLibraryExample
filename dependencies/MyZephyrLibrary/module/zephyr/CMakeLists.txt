set(MY_ZEPHYR_LIBRARY_AS_ZEPHYR_MODULE true GLOBAL_SCOPE)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../.. ${CMAKE_CURRENT_BINARY_DIR}/MyZephyrLibraryBinary)

zephyr_library()

zephyr_library_sources(${MY_ZEPHYR_LIBRARY_SOURCES})

zephyr_include_directories(${MY_ZEPHYR_LIBRARY_INCLUDES})

zephyr_library_link_libraries(${MY_ZEPHYR_LIBRARY_DEPENDENCIES})
