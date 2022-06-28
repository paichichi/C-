cmake_minimum_required(VERSION 3.22)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled cmake-build-debug/src/main.cpp cmake-build-debug/src/swap.cpp cmake-build-debug/inc/swap.h)
