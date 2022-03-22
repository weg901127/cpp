cmake_minimum_required(VERSION 3.19)
PROJECT(cpp01_ex01)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(zombie main.cpp Zombie.cpp Zombie.hpp ZombieHorde.cpp)
target_compile_options(zombie
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )