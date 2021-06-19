cmake_minimum_required(VERSION 3.19)
project(hw03ec)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw03ec
        ExtendedTime.cpp
        ExtendedTime.h
        hw03ec.cpp
        Time.cpp
        Time.h Invoice.h Invoice.cpp)
