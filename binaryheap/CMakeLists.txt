cmake_minimum_required(VERSION 3.7)
project(binaryheap)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp BinaryHeap.cpp BinaryHeap.h)
add_executable(binaryheap ${SOURCE_FILES})