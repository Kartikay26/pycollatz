cmake_minimum_required(VERSION 3.10)

# set the project name
project(Collatz)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the collatz library
add_library(collatz collatz.cpp)

# add the executable
add_executable(collatzer main.cpp)

target_link_libraries(collatzer PUBLIC collatz)

# python bindings using pybind
set(SYSTEM ON)
add_subdirectory(pybind11)
pybind11_add_module(pycollatz pycollatz.cpp)
target_link_libraries(pycollatz PUBLIC collatz)