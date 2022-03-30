cmake_minimum_required(VERSION 3.19)
PROJECT(cpp05_ex01)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )