cmake_minimum_required(VERSION 3.19)
PROJECT(cpp01_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Weapon.cpp Weapon.hpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp)
target_compile_options(main
	PUBLIC
		-std=c++98
		-Wall -Werror -Wextra
		)
#SET (CMAKE_CXX_FLAGS "-std=c++98")
