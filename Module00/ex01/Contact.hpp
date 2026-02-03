#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;


public:

    void setFirstName(const std::string& str);
    std::string getFirstName(void) const;

    void setLastName(const std::string& str);
    std::string getLastName(void) const;

    void setNickName(const std::string& str);
    std::string getNickName(void) const;

    void setPhoneNumber(const std::string& str);
    std::string getPhoneNumber(void) const;

    void setDarkestSecret(const std::string& str);
    std::string getDarkestSecret(void) const;

    void    fillInfo(void);
};

#endif
