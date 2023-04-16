cmake_minimum_required(VERSION 3.24)
project(tema2 C)

set(CMAKE_C_STANDARD 99)

add_executable(tema2 main.c structs.h functii.c functii.h)
target_link_libraries(tema2 m)