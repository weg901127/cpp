#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
#define MAX 8
class PhoneBook
{
	private:
		std::string         firstname[MAX];
		std::string         lastname[MAX];
		std::string         nickname[MAX];
		std::string         phonenumber[MAX];
		std::string         secret[MAX];
	public:
        PhoneBook();
        std::string&  getFirstname(int index);
        std::string&  getLastname(int index);
        std::string&  getNickname(int index);
        std::string&  getPhonenumber(int index);
        std::string&  getSecret(int index);
};

#endif
