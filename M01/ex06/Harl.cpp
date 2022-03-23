#include "Harl.hpp"

Harl::Harl(){
	this->lv_idx[0] = "DEBUG";
	this->lv_idx[1] = "INFO";
	this->lv_idx[2] = "WARNING";
	this->lv_idx[3] = "ERROR";
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
}
void	Harl::debug(void ) {
	std::cout << "[DEBUG]\n" <<"\"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
}

void	Harl::info(void ) {
	std::cout << "[INFO]\n" << "\"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\"" << std::endl;
}
void	Harl::warning(void ) {
	std::cout << "[WARNING]\n" << "\"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\"" << std::endl;
}
void	Harl::error(void ) {
	std::cout << "[ERROR]\n" << "\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
}
void	Harl::complain(std::string level ) {
	int	i;
	for (i = 0; i < 4 ; i++) {
		if (this->lv_idx[i] == level)
			break;
	}
	if (i == 4)
		return;
	else
	{
		for (int j = i ;j < 4; j++) {
			(this->*f[j])();
		}
		exit(0);	
	}
}
