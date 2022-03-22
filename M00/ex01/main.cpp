#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	*pb = new PhoneBook();
	std::string	input;
	while (!std::cin.eof())
	{
		std::cout << "PHONE BOOK \n1. ADD\n2. SEARCH\n3. EXIT\n";
		getline(std::cin, input);
		if (input == "ADD")
			pb->add();
		else if (input == "SEARCH")
		{
			pb->search();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input == "EXIT")
			break;
	}
	delete pb;
	return 0;
}
