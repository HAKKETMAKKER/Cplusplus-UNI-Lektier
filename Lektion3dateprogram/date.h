#ifndef DATE_H
#define DATE_H
#include <string>
#include <sstream>

class Date {
public:
    Date();

    Date(unsigned int time);

    std::string toString();

private:
    unsigned int _time;
};

#endif // DATE_H
