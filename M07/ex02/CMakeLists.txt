cmake_minimum_required(VERSION 3.19)
PROJECT(cpp07_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Array.hpp Array.tpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )