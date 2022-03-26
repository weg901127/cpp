cmake_minimum_required(VERSION 3.19)
PROJECT(cpp04_ex01)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Cat.cpp Cat.hpp Dog.cpp Dog.hpp Animal.cpp Animal.hpp WrongAnimal.cpp WrongAnimal.hpp WrongCat.cpp WrongCat.hpp WrongDog.cpp WrongDog.hpp Brain.cpp Brain.hpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )
