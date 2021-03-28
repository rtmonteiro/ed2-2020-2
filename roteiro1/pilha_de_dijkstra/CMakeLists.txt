cmake_minimum_required(VERSION 3.16)
project(pilha_de_dijkstra C)

set(CMAKE_C_STANDARD 99)

add_executable(pilha_de_dijkstra main.c stack_char.c stack_char.h stack.c stack.h)