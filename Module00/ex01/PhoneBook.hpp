/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:59:25 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 19:59:26 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact Book[8];
    int _index;
    int _count;

public:
    PhoneBook();
    void   addContact(void);
    void   searchContact(void) const;
};

#endif
