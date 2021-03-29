cmake_minimum_required(VERSION 3.16)
project(sort C)

set(CMAKE_C_STANDARD 11)

add_executable(sort main.c item.h shaker_sort.c)