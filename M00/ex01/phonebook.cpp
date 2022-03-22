#include "phonebook.hpp"

static void	put_str(std::string str)
{
	if (str.length() > 10)
	{
		str[9] = '.';
		str[10] = '\0';
	}
	std::cout << std::setw(10) << str.begin().base() << "|";
}

static void	my_getline(std::string& str, const char *msg)
{
	str.clear();
	while (str.empty())
	{
		std::cout << msg << " --> ";
		getline(std::cin, str);
	}
}

static void	put_header()
{
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
}

PhoneBook::PhoneBook() {
    std::fill_n(firstname, MAX, "");
    std::fill_n(lastname, MAX, "");
    std::fill_n(nickname, MAX, "");
    std::fill_n(phonenumber, MAX, "");
    std::fill_n(secret, MAX, "");
}
void	PhoneBook::search()
{
	int	index;

	put_header();
	for (int i = 0 ; i < MAX && !firstname[i].empty(); i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		put_str(firstname[i]);
		put_str(lastname[i]);
		put_str(nickname[i]);
		std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "input index : (input -1 for prev)" << std::endl;
		std::cin >> index;
		if (index == -1)
			return ;
		else if (index > 7 || index < -1)
		{
			std::cout << "out of index" << std::endl;
			break;
		}
		if (firstname[index].empty())
		{
			std::cout << "EMPTY" << std::endl;
			continue;
		}
		std::cout << "first name     : " << firstname[index] << std::endl;
		std::cout << "last name      : " << lastname[index] << std::endl;
		std::cout << "nick name      : " << nickname[index] << std::endl;
		std::cout << "phone number   : " << phonenumber[index] << std::endl;
		std::cout << "darkest secret : " << secret[index] << std::endl;
		break;
	}
}

void	PhoneBook::add()
{
	my_getline(firstname[this->count], "first name");
	my_getline(lastname[this->count], "last name");
	my_getline(nickname[this->count], "nickname");
	my_getline(phonenumber[this->count], "phone number");
	my_getline(secret[this->count], "darkest secret");
	if (++(this->count) == 8)
		this->count = 0;
}
