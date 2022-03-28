//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP05_EX00_EXCEPTIONPRINTER_HPP
#define CPP05_EX00_EXCEPTIONPRINTER_HPP

#include <iostream>
#include <exception>
class ExceptionPrinter {};
std::ostream&	operator<<(std::ostream& out, const std::exception& src);
#endif //CPP05_EX00_EXCEPTIONPRINTER_HPP
