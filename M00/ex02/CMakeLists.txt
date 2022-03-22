cmake_minimum_required(VERSION 3.19)
PROJECT(cpp00_ex00)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(test Account.cpp Account.hpp tests.cpp)
target_compile_options(test
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )