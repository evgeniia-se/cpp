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


void Contact::fillInfo(void){

    std::string comand;

    std::cout << "Enter first name" << std::endl;
    std::getline(std::cin, comand);
    while (comand.empty())
    {
        std::cout << "Field cannot be empty. Enter first name" << std::endl;
        std::getline(std::cin, comand);
    }
    this->setFirstName(comand);
    std::cout << "Enter last name" << std::endl;
    std::getline(std::cin, comand);
    while (comand.empty())
    {
        std::cout << "Field cannot be empty. Enter last name" << std::endl;
        std::getline(std::cin, comand);
    }
    this->setLastName(comand);
    std::cout << "Enter nickname" << std::endl;
    std::getline(std::cin, comand);
    while (comand.empty())
    {
        std::cout << "Field cannot be empty. Enter nickname" << std::endl;
        std::getline(std::cin, comand);
    }
    this->setNickName(comand);
    std::cout << "Enter phone number" << std::endl;
    std::getline(std::cin, comand);
    while (comand.empty())
    {
        std::cout << "Field cannot be empty. Enter phone number" << std::endl;
        std::getline(std::cin, comand);
    }
    this->setPhoneNumber(comand);
    std::cout << "Enter darkest secret" << std::endl;
    std::getline(std::cin, comand);
    while (comand.empty())
    {
        std::cout << "Field cannot be empty. Enter darkest secret" << std::endl;
        std::getline(std::cin, comand);
    }
    this->setDarkestSecret(comand);
}
