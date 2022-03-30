//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP04_EX03_BUREAUCRAT_HPP
#define CPP04_EX03_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;
#define HIGH    1
#define LOW     150
class Bureaucrat {
private:
    std::string const   name;
    int                 grade;
public:
    Bureaucrat();
    ~Bureaucrat();
	explicit Bureaucrat(std::string const& name);
    Bureaucrat(Bureaucrat& src);
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat& operator=(Bureaucrat& src);
    const std::string&  getName() const;
    int                 getGrade() const;
    void                increase();
	void                decrease();
	void                signForm(Form& src);
    class GradeTooHighException : public std::exception{
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        const char *what() const throw();
    };
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& src);
#endif //CPP04_EX03_BUREAUCRAT_HPP
