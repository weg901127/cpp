cmake_minimum_required(VERSION 3.19)
PROJECT(cpp05_ex00)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(convert main.cpp Caster.cpp Caster.hpp)
target_compile_options(convert
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )