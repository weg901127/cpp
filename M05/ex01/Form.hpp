//
// Created by Giyoung Lee on 3/30/22.
//

#ifndef CPP05_EX01_FORM_HPP
#define CPP05_EX01_FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
private:
	std::string const name;
	bool isSigned;
	int const signGrade;
	int const executeGrade;
public:
	Form();

	~Form();

	Form(Form &src);

	Form(const std::string &name, const int signGrade, const int executeGrade);

	Form &operator=(Form &src);

	const std::string &getName() const;

	bool beSigned(Bureaucrat& src);

	bool getIsSigned() const;

	int getSignGrade() const;

	int getExecuteGrade() const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& src);
#endif //CPP05_EX01_FORM_HPP
