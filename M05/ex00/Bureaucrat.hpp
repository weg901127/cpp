//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP04_EX03_BUREAUCRAT_HPP
#define CPP04_EX03_BUREAUCRAT_HPP

#include <iostream>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#define HIGH    1
#define LOW     150
class Bureaucrat : public GradeTooHighException, public GradeTooLowException{
private:
    std::string const   name;
    int                 grade;
public:
    Bureaucrat();
    ~Bureaucrat() throw();
	explicit Bureaucrat(std::string const& name);
    Bureaucrat(Bureaucrat& src);
    Bureaucrat& operator=(Bureaucrat& src);
    const std::string&  getName() const;
    int                 getGrade() const;
    void                increase();
	void                decrease();
};

#endif //CPP04_EX03_BUREAUCRAT_HPP
