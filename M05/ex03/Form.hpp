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
	std::string const target;
public:
	const std::string &getTarget() const;

private:
	bool isSigned;
	int const signGrade;
	int const executeGrade;
protected:
	void    setName(std::string const& sname);
	void    setTarget(std::string const& starget);
	void    setIsSigned(bool isSigned);
	void    setSignGrade(int const signGrade);
	void    setExecuteGrade(int const executeGrade);
public:
	Form();
	virtual ~Form();
	Form(Form &src);
	Form(const std::string &name, const std::string &target, const int signGrade, const int executeGrade);
	Form &operator=(Form &src);
	virtual const std::string &getName() const;
	virtual void beSigned(Bureaucrat& src);
	virtual void execute(Bureaucrat& src) const = 0;
	virtual bool getIsSigned() const;
	virtual int getSignGrade() const;
	virtual int getExecuteGrade() const;
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class NotSignedException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& src);
#endif //CPP05_EX01_FORM_HPP
