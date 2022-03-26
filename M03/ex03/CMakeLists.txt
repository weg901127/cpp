cmake_minimum_required(VERSION 3.19)
PROJECT(cpp03_ex03)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp DiamondTrap.cpp DiamondTrap.hpp ../../M04/ex00/Dog.cpp ../../M04/ex00/Dog.hpp ../../M04/ex00/Cat.cpp ../../M04/ex00/Cat.hpp ../../M04/ex00/main.cpp)
target_compile_options(main
	PUBLIC
		-g
		-std=c++98
		-Wall -Werror -Wextra
		-Wno-shadow-ivar
		)
