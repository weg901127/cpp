//
// Created by Giyoung Lee on 3/30/22.
//

#ifndef CPP05_EX02_ROBOTOMYREQUESTFORM_HPP
#define CPP05_EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm& src);
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm&  operator=(RobotomyRequestForm& src);
	void execute(Bureaucrat &src) const;
};


#endif //CPP05_EX02_ROBOTOMYREQUESTFORM_HPP
