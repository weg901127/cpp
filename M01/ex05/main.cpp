#include "Karen.hpp"

int main( void )
{
	Karen a = Karen();

	a.complain("debug");
	a.complain("info");
	a.complain("warning");
	a.complain("error");
	std::cout << "input_null" << std::endl;
	a.complain("");
}
