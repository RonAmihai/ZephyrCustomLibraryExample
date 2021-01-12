Usage of Zephyr RTOS library (with sub dependencies)
#####################################################

Overview
*****************************************************
Sample project to demonstrate how to setup
& use custom simple Zephyr RTOS library, which uses
both Zephyr API & external dependencies (regular
CMake libraries).

The sample also demonstrates C++20 & STL usage.

Building and Running
********************

The Zephyr library (MyZephyrLibrary in this example)
can be configured & compiled in several ways:

    1. As standalone project (running CMake / West
    in MyZephyrLibrary directory).

    This method uses a "mocked" app for the sake of
    compiling the library with Zephyr API (also useful
    for including E2E / integration tests with the library)

    2. As part of a real Zephyr application (running
    CMake / West in the root directory).

    This method uses the Zephyr library as part of
    a "host" (real) Zephyr application target

All of Zephyr's documentation & tools is completely
applicable and remains the same for both ways.

Notes
*******************************************************
- CMake C/C++ standards versions are set using
  `CMAKE_CXX_STANDARD` instead of
  `target_compile_features` due to a bug with
  `arm-none-eabi` toolchain on Windows.

- The idea is based on Zephyr's example for creating
  kernel out-of-tree drivers. The given library is
  actually a Zephyr module, without usage of the syscall
  & external device mechanism.

