cmake_minimum_required(VERSION 3.19)
PROJECT(cpp01_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp)
target_compile_options(main
	PUBLIC
		-g
		-std=c++98
		-Wall -Werror -Wextra
		)
