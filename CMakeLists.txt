cmake_minimum_required(VERSION 3.13)
project(Assignment3)

set(CMAKE_CXX_STANDARD 14)
set(-Wall -Wextra -pedantic -std=c++14)
add_executable(Assignment3 main.cpp heap.cpp heap.hpp HospitalDispatch.cpp HospitalDispatch.hpp)