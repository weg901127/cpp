//
// Created by Giyoung Lee on 3/28/22.
//

#include "AExceptionPrinter.hpp"

std::ostream &operator<<(std::ostream &out, const std::exception &src) {
	std::cout << src.what();
	return out;
}