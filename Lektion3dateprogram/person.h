#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date.h"

class Person
{
public:
    Person();
    Person(const std::string& firstname, const std::string& lastname);

    void setFirstName(const std::string& firstname){ _firstName = firstname;}
    void setLastName(const std::string& lastname){ _lastName = lastname;}
    void setAddress(const std::string& address);
    void setCountry(const std::string& country);
    void setGender(const char gender);
    void setDate(const Date &d);

    std::string toString();

private:
    std::string _firstName;
    std::string _lastName;
    std::string _address;
    std::string _country;
    char _gender;
    Date _date;

};

#endif // PERSON_H
