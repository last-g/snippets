cmake_minimum_required(VERSION 3.0)
project(snippets)

# Base compliler flags, we use C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Create executable with name `hello` from one c++ source file
add_executable(hello src/hello.cpp)



# Create set of files with only one file in and compile it to executable
set(TEE_SOURCE_FILES src/tee.cpp)
add_executable(tee ${TEE_SOURCE_FILES})


set(BTEE_SOURCE_FILES src/btee.cpp)
add_executable(btee ${BTEE_SOURCE_FILES})


# Set Boost as compile&link dependency
find_package(Boost
    1.44.0                      # Minimum or EXACT version e.g. 1.36.0
    REQUIRED                    # Fail with error if Boost is not found
    # [COMPONENTS <libs>...]    # Boost libraries by their canonical name
)

# Compile executable from many sources
set(FIBBER_SOURCE_FILES src/fibber.cpp src/fibbs.cpp)
add_executable(fibbs ${FIBBER_SOURCE_FILES})
