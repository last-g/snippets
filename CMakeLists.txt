cmake_minimum_required(VERSION 3.0)
project(snippets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HELLO_SOURCE_FILES src/hello.cpp)
add_executable(hello ${HELLO_SOURCE_FILES})

set(TEE_SOURCE_FILES src/tee.cpp)
add_executable(tee ${TEE_SOURCE_FILES})


set(BTEE_SOURCE_FILES src/btee.cpp)
add_executable(btee ${BTEE_SOURCE_FILES})


find_package(Boost
    1.44.0      # Minimum or EXACT version e.g. 1.36.0
    REQUIRED             # Fail with error if Boost is not found
    # [COMPONENTS <libs>...] # Boost libraries by their canonical name
)

set(FIBBER_SOURCE_FILES src/fibber.cpp src/fibbs.cpp)
add_executable(fibbs ${FIBBER_SOURCE_FILES})
