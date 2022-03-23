//
// Created by Giyoung Lee on 3/23/22.
//
#include "PhoneBook.hpp"
#include "Contact.hpp"

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

Contact::Contact() {
    count = 0;
}

void	Contact::search()
{
    int	index;

    put_header();
    for (int i = 0 ; i < MAX && !pb.getFirstname(i).empty(); i++)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        put_str(pb.getFirstname(i));
        put_str(pb.getLastname(i));
        put_str(pb.getNickname(i));
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
        if (pb.getFirstname(index).empty())
        {
            std::cout << "EMPTY" << std::endl;
            continue;
        }
        std::cout << "first name     : " << pb.getFirstname(index) << std::endl;
        std::cout << "last name      : " << pb.getLastname(index) << std::endl;
        std::cout << "nick name      : " << pb.getNickname(index) << std::endl;
        std::cout << "phone number   : " << pb.getPhonenumber(index) << std::endl;
        std::cout << "darkest secret : " << pb.getSecret(index) << std::endl;
        break;
    }
}


void	Contact::add()
{
    my_getline(pb.getFirstname(this->count), "first name");
    my_getline(pb.getLastname(this->count), "last name");
    my_getline(pb.getNickname(this->count), "nickname");
    my_getline(pb.getPhonenumber(this->count), "phone number");
    my_getline(pb.getSecret(this->count), "darkest secret");
    if (++(this->count) == 8)
        this->count = 0;
}
