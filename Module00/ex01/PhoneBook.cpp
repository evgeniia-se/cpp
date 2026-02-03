#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->_index = 0;
    this->_count = 0;
}

void PhoneBook::addContact(void){

    this->Book[this->_index % 8].fillInfo();
    this->_index++;
    if (this->_count < 8)
        _count++;
}

static std::string cut_info(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::searchContact(void) const {

    int i;
    std::string command;
    int j;
    if (this->_count == 0)
    {
		std::cout << "Phone book is empty." << std::endl;
		return ;
	}
    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
//std::cout << "|" << std::setw(10) << "Darkest Secret" << std::endl;

    for (i = 0; i < this->_count; i++)
    {
        std::cout << "|" << std::setw(10) << i;

        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getFirstName());
        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getLastName());
        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getNickName());
		std::cout << "|" << std::endl;
    }
    std::cout << "Enter index to see details: ";
    if (!std::getline(std::cin, command))
        return;
    if (command.length() == 1 && command[0] >= '0' && command[0] <= '7')
    {
        j = command[0] - '0';
        if (j < this->_count)
        {
            std::cout << this->Book[j].getFirstName() << std::endl;
            std::cout  << this->Book[j].getLastName() << std::endl;
            std::cout  << this->Book[j].getNickName() << std::endl;
			std::cout  << this->Book[j].getPhoneNumber() << std::endl;
            std::cout  << this->Book[j].getDarkestSecret() << std::endl;
        }
        else
            std::cout << "Empty contact." << std::endl;
	}
	else
		std::cout << "Invalid index." << std::endl;


}
