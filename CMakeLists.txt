cmake_minimum_required(VERSION 3.26)
project(grafoDirigido2)

set(CMAKE_CXX_STANDARD 17)

add_executable(grafoDirigido2 main.cpp
        Warshall.cpp
        Warshall.h)
