PROJECT(cpp00_ex00)
ADD_EXECUTABLE( megaphone megaphone.cpp)
SET (CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98")
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
