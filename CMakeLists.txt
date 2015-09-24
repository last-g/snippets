cmake_minimum_required(VERSION 3.0)
project(snippets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/hello.cpp)
add_executable(hello ${SOURCE_FILES})