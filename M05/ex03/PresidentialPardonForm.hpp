//
// Created by Giyoung Lee on 3/30/22.
//

#ifndef CPP05_EX02_PRESIDENTIALPARDONFORM_HPP
#define CPP05_EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm& src);
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm&  operator=(PresidentialPardonForm& src);
	void execute(Bureaucrat &src) const;
};


#endif //CPP05_EX02_PRESIDENTIALPARDONFORM_HPP
