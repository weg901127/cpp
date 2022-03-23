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
void	Harl::debug( void ) {
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}
void	Harl::warning( void ) {
	std::cout << "\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}
void	Harl::error( void ) {
	std::cout << "\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
}
void	Harl::complain( std::string level ) {
	for (int i = 0; i < 4 ; i++) {
		this->lv_idx[i] == level ? (this->*f[i])() : void();
	}
}
