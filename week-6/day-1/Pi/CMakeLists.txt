cmake_minimum_required(VERSION 3.14)
project(Pi C)

set(CMAKE_C_STANDARD 99)

add_executable(pi main.c circle.h circle.c)