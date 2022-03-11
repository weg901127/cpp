PROJECT(cpp00_ex01)
ADD_EXECUTABLE( test Account.cpp Account.hpp tests.cpp)
SET (CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98")
#SET (CMAKE_CXX_FLAGS "-std=c++98")
