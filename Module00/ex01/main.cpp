/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:59:14 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 19:59:15 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command [ADD, SEARCH or EXIT]: ";
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
        {
            phonebook.addContact();
        //std::cout << std::endl;
        }
        else if (command == "SEARCH")
            phonebook.searchContact();
         if (command == "EXIT")
            break;
    }



    return 0;
}
