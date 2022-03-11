#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		int			count;
		std::string	firstname[8];
		std::string	lastname[8];
		std::string	nickname[8];
		std::string	phonenumber[8];
		std::string	secret[8];
	public:
		void	search();
		void	add();
};

#endif
