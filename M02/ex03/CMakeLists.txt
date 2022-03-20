cmake_minimum_required(VERSION 3.19)
PROJECT(cpp01_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Fixed.cpp Fixed.hpp Point.cpp Point.hpp)
target_compile_options(main
	PUBLIC
		-g
		-std=c++98
		#-Wall -Werror -Wextra
		)
#SET (CMAKE_CXX_FLAGS "-std=c++98")
