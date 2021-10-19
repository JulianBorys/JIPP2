cmake_minimum_required(VERSION 3.20)
project(firstLib)

set(CMAKE_CXX_STANDARD 14)

add_executable(firstLib firstLibCall/main.cpp Library/include/lib.h Library/src/lib.cpp)
