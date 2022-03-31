//
// Created by Giyoung Lee on 3/30/22.
//

#ifndef CPP05_EX02_SHRUBBERYCREATIONFORM_HPP
#define CPP05_EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"


class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm& src);
	ShrubberyCreationForm(const std::string &name);
	ShrubberyCreationForm&  operator=(ShrubberyCreationForm& src);
	void execute(Bureaucrat &src) const;
};


#endif //CPP05_EX02_SHRUBBERYCREATIONFORM_HPP
