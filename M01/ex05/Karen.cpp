#include "Karen.hpp"

Karen::Karen(){
	this->lv_idx[0] = "DEBUG";
	this->lv_idx[1] = "INFO";
	this->lv_idx[2] = "WARNING";
	this->lv_idx[3] = "ERROR";
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
}
void	Karen::debug( void ) {
	std::cout << "\"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "\"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\"" << std::endl;
}
void	Karen::warning( void ) {
	std::cout << "\"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\"" << std::endl;
}
void	Karen::error( void ) {
	std::cout << "\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
}
void	Karen::complain( std::string level ) {
	for (int i = 0; i < 4 ; i++) {
		this->lv_idx[i] == level ? (this->*f[i])() : void();
	}
}
