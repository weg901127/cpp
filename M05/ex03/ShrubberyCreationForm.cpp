//
// Created by Giyoung Lee on 3/30/22.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

#define SSIGN   145
#define SEXEC   137
#define SFormName "ShrubberyCreationForm"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src){
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form(SFormName, target,SSIGN, SEXEC) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src) {
	Form::setName(src.getName());
	Form::setIsSigned(src.getIsSigned());
	Form::setSignGrade(src.getSignGrade());
	Form::setExecuteGrade(src.getExecuteGrade());
	Form::setTarget(src.getTarget());
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat &src) const {
	if (!Form::getIsSigned())
		throw Form::NotSignedException();
	if (src.getGrade() > Form::getExecuteGrade())
		throw Form::GradeTooLowException();
	std::cout << src.getName() + " executed " + Form::getName() << std::endl;
	std::ofstream ofile("<" + Form::getTarget() + ">_shrubbery");
	ofile << "                     .o00o\n"
	             "                   o000000oo\n"
	             "                  00000000000o\n"
	             "                 00000000000000\n"
	             "              oooooo  00000000  o88o\n"
	             "           ooOOOOOOOoo  ```''  888888\n"
	             "         OOOOOOOOOOOO'.qQQQQq. `8888'\n"
	             "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
	             "        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
	             "         OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
	             "           OOOOOOOOO `QQQQQQ/ /QQ'\n"
	             "             OO:F_P:O `QQQ/  /Q'\n"
	             "                \\\\. \\ |  // |\n"
	             "                d\\ \\\\\\|_////\n"
	             "                qP| \\\\ _' `|Ob\n"
	             "                   \\  / \\  \\Op\n"
	             "                   |  | O| |\n"
	             "           _       /\\. \\_/ /\\\n"
	             "            `---__/|_\\\\   //|  __\n"
	             "                  `-'  `-'`-'-'";
	ofile.close();
}
