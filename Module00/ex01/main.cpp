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
