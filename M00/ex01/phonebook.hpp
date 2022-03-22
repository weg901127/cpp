#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
#define MAX 8
class PhoneBook
{
	private:
		int			count;
		std::string	firstname[MAX];
		std::string	lastname[MAX];
		std::string	nickname[MAX];
		std::string	phonenumber[MAX];
		std::string	secret[MAX];
	public:
        PhoneBook();
		void	search();
		void	add();
};

#endif
