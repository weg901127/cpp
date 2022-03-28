cmake_minimum_required(VERSION 3.19)
PROJECT(cpp04_ex03)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp AMateria.cpp AMateria.hpp Ice.cpp Ice.hpp Cure.cpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Character.cpp Character.hpp MateriaSource.cpp MateriaSource.hpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )
