/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:59:07 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/11 20:05:01 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& str){

    this->_firstName = str;
}

std::string Contact::getFirstName(void) const{

    return(this->_firstName);
}

void Contact::setLastName(const std::string& str){

    this->_lastName = str;
}

std::string Contact::getLastName(void) const{

    return(this->_lastName);
}

void Contact::setNickName(const std::string& str){

    this->_nickName = str;
}

std::string Contact::getNickName(void) const{

    return(this->_nickName);
}

void Contact::setPhoneNumber(const std::string& str){

    this->_phoneNumber = str;
}
std::string Contact::getPhoneNumber(void) const{

    return(this->_phoneNumber);
}

void Contact::setDarkestSecret(const std::string& str){

    this->_darkestSecret = str;
}
std::string Contact::getDarkestSecret(void) const{

    return(this->_darkestSecret);
}

static bool valid_input(const std::string command){
    std::string str = command;
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++){
        if (!std::isspace(str[i]))
            return true;
    }
    return false;
}

void Contact::fillInfo(void){

    std::string command;

    std::cout << "Enter first name" << std::endl;
    if (!std::getline(std::cin, command))
        return;
    while (!valid_input(command))
    {
        std::cout << "Field cannot be empty. Enter first name" << std::endl;
        if (!std::getline(std::cin, command))
            return;
    }
    this->setFirstName(command);

    std::cout << "Enter last name" << std::endl;
    if (!std::getline(std::cin, command))
        return;
    while (!valid_input(command))
    {
        std::cout << "Field cannot be empty. Enter last name" << std::endl;
        if(!std::getline(std::cin, command))
            return;
    }
    this->setLastName(command);

    std::cout << "Enter nickname" << std::endl;
    if (!std::getline(std::cin, command))
        return;
    while (!valid_input(command))
    {
        std::cout << "Field cannot be empty. Enter nickname" << std::endl;
        if(!std::getline(std::cin, command))
            return;
    }
    this->setNickName(command);

    std::cout << "Enter phone number" << std::endl;
    if (!std::getline(std::cin, command))
        return;
    while (!valid_input(command))
    {
        std::cout << "Field cannot be empty. Enter phone number" << std::endl;
        if (!std::getline(std::cin, command))
            return;
    }
    this->setPhoneNumber(command);

    std::cout << "Enter darkest secret" << std::endl;
    if (!std::getline(std::cin, command))
        return;
    while (!valid_input(command))
    {
        std::cout << "Field cannot be empty. Enter darkest secret" << std::endl;
        if (!std::getline(std::cin, command))
            return;
    }
    this->setDarkestSecret(command);
}
