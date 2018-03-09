#include "Date.h"
#include <sstream>

Date::Date(){}

Date::Date(unsigned int time) {
    _time = time;
    }

std::string Date::toString(){
    const int SECONDS_PER_DAY = 60*60*24; //86400
    const int SECONDS_PER_MONTH = SECONDS_PER_DAY*30;
    const int SECONDS_PER_YEAR = SECONDS_PER_DAY*365;

    int year = 1970 + _time/SECONDS_PER_YEAR;
    int month = (_time-SECONDS_PER_YEAR*(year-1970))/SECONDS_PER_MONTH+1;
    int day = (_time-SECONDS_PER_YEAR*(year-1970) - (month-1)*SECONDS_PER_MONTH)/SECONDS_PER_DAY+1;

    std::stringstream ss;
    ss << year << "-" << month << "-" << day;
    return ss.str();

    }
