#include "person.h"
#include <sstream>

Person::Person()
{
}

Person::Person(const std::string &firstname, const std::string &lastname){
    _firstName = firstname;
    _lastName = lastname;
}

void Person::setAddress(const std::string &address){
    _address = address;
}

void Person::setCountry(const std::string &country){
    _country = country;
}

void Person::setDate(const Date &d){
    _date = d;
}

void Person::setGender(const char gender){
    _gender = gender;
}

std::string Person::toString(){
    std::stringstream ss;

    ss << _firstName << " " << _lastName << std::endl;
    ss << _address << std::endl;
    ss << _country << std::endl;
    ss << "Gender: ";

    if (_gender == 'M' || _gender == 'm') {
        ss << "Male";
    } else if (_gender == 'F' || _gender == 'f'){
        ss << "Female";
    }
    ss << std::endl;

    ss << "Birthday: " << _date.toString() << std::endl;

    return ss.str();
    }
