//
// Created by Giyoung Lee on 3/31/22.
//

#ifndef CPP05_EX02_INTERN_HPP
#define CPP05_EX02_INTERN_HPP

#include "Form.hpp"

class Intern {
private:
	std::string const forms[3];
public:
	Intern();
	~Intern();
	Intern(Intern& src);
	Intern& operator=(Intern& src);
	Form*   makeForm(std::string const& formName, std::string const& target);
	class InvalidFormException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};


#endif //CPP05_EX02_INTERN_HPP
