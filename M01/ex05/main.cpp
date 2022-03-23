#include "Harl.hpp"

int main( void )
{
	Harl a = Harl();

	a.complain("DEBUG");
	a.complain("INFO");
	a.complain("WARNING");
	a.complain("ERROR");
	a.complain("");
}
