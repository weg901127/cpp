cmake_minimum_required(VERSION 3.19)
PROJECT(cpp05_ex02)
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
ADD_EXECUTABLE(main main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp Intern.cpp Intern.hpp)
target_compile_options(main
        PUBLIC
        -g
        -std=c++98
        -Wall -Werror -Wextra
        )