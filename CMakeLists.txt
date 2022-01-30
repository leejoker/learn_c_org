cmake_minimum_required(VERSION 3.21)
project(learn_c_org C)

set(CMAKE_C_STANDARD 99)

add_executable(learn_c_org main.c src/pointer.c headers/pointer.h src/static.c headers/static.h headers/stdlib_import.h headers/str.h src/str.c src/dynamic_alloc.c headers/recursion.h src/recur.c src/linked_list.c src/binary_trees.c src/unions.c headers/unions.h)
