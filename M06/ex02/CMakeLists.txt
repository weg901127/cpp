cmake_minimum_required(VERSION 3.19)
PROJECT(cpp06_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Base.cpp Base.hpp A.cpp A.hpp B.cpp B.hpp C.cpp C.hpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )