Snippets
========

This project contains simple snippets of C++ code and shows usage of CMake, stdlib and boost.


Common links
------------

 * http://www.cplusplus.com/reference/
 * https://cmake.org/documentation/
 * http://www.boost.org/doc/libs/

Structure
---------

#### hello

Simple "hello world". Prints constant string to stdout and shows namespace usage.
 

#### tee

Reads all contents of one file and outputs it in file and stdout. Shows simple work with files and args.


#### btee

Reads all contents of one binary file and outputs it in file and stdout. Shows work with iterator.


#### fibbs

Reads number N from args and prints N fibonacci numbers. Shows usage of headers, boost library and vector.


Build
-----

 * `mkdir -p out`
 * `cd out`
 * `cmake ..`
 * `make`
