cmake_minimum_required(VERSION 3.16)
project(problema_de_josefo C)

set(CMAKE_C_STANDARD 11)

add_executable(problema_de_josefo main.c josefo.h list.c list.h josefo.c)