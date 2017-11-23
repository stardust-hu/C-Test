cmake_minimum_required(VERSION 3.10)
project(C_learn)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp learn1.cpp my_head.h learn2.cpp learn3.cpp)
add_executable(C_learn ${SOURCE_FILES})