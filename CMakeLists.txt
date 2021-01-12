cmake_minimum_required(VERSION 3.13.1)

set (CMAKE_CXX_STANDARD 20)

list(APPEND ZEPHYR_EXTRA_MODULES ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/MyZephyrLibrary/module)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(ZephyrLibraryUsage)

target_sources(app PRIVATE src/main.cpp)

target_include_directories(app PRIVATE include)
