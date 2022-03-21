cmake_minimum_required(VERSION 3.19)
PROJECT(cpp03_ex03)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.h DiamondTrap.cpp DiamondTrap.h)
target_compile_options(main
	PUBLIC
		-g
		-std=c++98
		-Wall -Werror -Wextra
		)
