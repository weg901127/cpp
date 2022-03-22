cmake_minimum_required(VERSION 3.19)
PROJECT(cpp00_ex00)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(megaphone megaphone.cpp)
target_compile_options(megaphone
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )