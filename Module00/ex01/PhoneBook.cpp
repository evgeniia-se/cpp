/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:59:21 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/11 19:49:30 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
//length before 10 char
static std::string cut_info(const std::string& str) {
    /*std::string res = str;
    for (size_t i = 0; i < res.length(); i++){
        if (res[i] == '\t' || '\r')
            res[i] = ' ';
        }*/
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

    //write table header
    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;

    // write table rows
    for (i = 0; i < this->_count; i++)
    {
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getFirstName());
        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getLastName());
        std::cout << "|" << std::setw(10) << cut_info(this->Book[i].getNickName());
		std::cout << "|" << std::endl;
    }
    //question user for index to show details
    std::cout << "Enter index to see details: ";
    if (!std::getline(std::cin, command))
        return;
    //check length of arguments and number from 0 to 7(8)
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
