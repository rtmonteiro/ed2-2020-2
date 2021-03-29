cmake_minimum_required(VERSION 3.16)
project(aula11_mergesort C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(aula11_mergesort
        item.h
        main.c
        mergesort_bottomup.c)
