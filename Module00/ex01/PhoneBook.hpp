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
