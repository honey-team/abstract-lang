cmake_minimum_required(VERSION 3.28)
project(abstract-lang)

set(CMAKE_CXX_STANDARD 17)

add_executable(abstract-lang main.cpp
        Config.h
        Config.cpp
        abstract/main.h
        abstract/main.cpp
        abstract/includes.h)