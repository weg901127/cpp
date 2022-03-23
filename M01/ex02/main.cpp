#include <iostream>

int main( void ){
	std::string str = "HI THIS IS BRAIN";
    std::string*    str_p = &str;
	std::string	const&  stringREF = str;
    std::string const&  ref2 = stringREF;
    (void)ref2;
    std::cout << "SRC_ADDR  : " << &str << std::endl;
	std::cout << "PTR_ADDR  : " << str_p << std::endl;
	std::cout << "REF_ADDR  : " << &stringREF << std::endl;

    std::cout << "SRC_VALUE : " << str << std::endl;
	std::cout << "PTR_VALUE : " << *str_p << std::endl;
	std::cout << "REF_VALUE : " << stringREF << std::endl;
    return 0;
}
//TODO 평가준비~