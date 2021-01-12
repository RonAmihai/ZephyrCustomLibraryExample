cmake_minimum_required(VERSION 3.13.1)

# Adds Zephyr source tree if library opened as standalone project
if (NOT MY_ZEPHYR_LIBRARY_AS_ZEPHYR_MODULE)
    find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
endif ()

# Configure library project
project(MyZephyrLibrary)

# Alias sources, includes and dependencies targets
set(MY_ZEPHYR_LIBRARY_SOURCES
        ${PROJECT_SOURCE_DIR}/src/MyZephyrLibrary.cpp
        CACHE STRING "MyZephyrLibrary source files")
set(MY_ZEPHYR_LIBRARY_INCLUDES
        ${PROJECT_SOURCE_DIR}/include
        CACHE STRING "MyZephyrLibrary include directories")
set(MY_ZEPHYR_LIBRARY_DEPENDENCIES
        LibraryDependency
        CACHE STRING "MyZephyrLibrary dependencies targets")

# Add subdirectory of every dependency target
add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/LibraryDependency)

# Compile library as module if opened as part of other Zephyr app project
if (MY_ZEPHYR_LIBRARY_AS_ZEPHYR_MODULE)
    return()
endif ()

# Otherwise compile library with mocked "app" executable if library is opened as standalone project
target_sources(app PRIVATE ${MY_ZEPHYR_LIBRARY_SOURCES})
target_include_directories(app PRIVATE ${MY_ZEPHYR_LIBRARY_INCLUDES})
target_link_libraries(app PRIVATE ${MY_ZEPHYR_LIBRARY_DEPENDENCIES})
