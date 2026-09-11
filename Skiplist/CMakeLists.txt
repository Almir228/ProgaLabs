cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)

# main.cpp includes the template implementation; do not compile it twice.
add_executable(Skiplist main.cpp)
