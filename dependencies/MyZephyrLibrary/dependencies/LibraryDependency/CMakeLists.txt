cmake_minimum_required(VERSION 3.13.1)
project(LibraryDependency)

set (CMAKE_C_STANDARD 99)

add_library(LibraryDependency STATIC src/libDep.c)

target_include_directories(LibraryDependency PUBLIC include)
