cmake_minimum_required(VERSION 3.0)
project(snippets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HELLO_SOURCE_FILES src/hello.cpp)
add_executable(hello ${HELLO_SOURCE_FILES})

set(TEE_SOURCE_FILES src/tee.cpp)
add_executable(tee ${TEE_SOURCE_FILES})


set(BTEE_SOURCE_FILES src/btee.cpp)
add_executable(btee ${BTEE_SOURCE_FILES})
