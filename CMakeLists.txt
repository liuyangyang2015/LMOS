cmake_minimum_required(VERSION 3.20)
project(LMOS C)

set(CMAKE_C_STANDARD 11)

include_directories(Demo)

add_executable(LMOS
        Demo/Hello.c
        Demo/Hello.h)
