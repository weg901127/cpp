#include <iostream>

int main( void ){
	char		stringPTR[] = "HI THIS IS BRAIN";
	std::string	stringREF = "HI THIS IS BRAIN";

	std::cout << "PTR : " << &stringPTR << std::endl;
	std::cout << "REF : " << &stringREF << std::endl;

	std::cout << "PTR : " << stringPTR << std::endl;
	std::cout << "REF : " << stringREF << std::endl;
}
//TODO 평가준비~