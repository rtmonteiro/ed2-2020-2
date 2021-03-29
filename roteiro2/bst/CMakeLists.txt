cmake_minimum_required(VERSION 3.16)
project(bst C)

set(CMAKE_C_STANDARD 99)

add_executable(bst bst.c bst.h stack.c stack.h main4.c)
target_link_libraries(bst m)