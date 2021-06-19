
#include "Time.h"


// default ExtendedTime constructor
Time::Time()
{
    hours = 0;
    min   = 0;
    sec   = 0;

}

// alternate ExtendedTime constructor
Time::Time(int hours, int min, int sec) : hours(hours), min(min), sec(sec)
{

}

// destructor
Time::~Time()
=default;

string Time::PrintTime() const
{
    string result;

    hours < 10? result = "0" + to_string(hours): result = to_string(hours);
    result += ":";
    min < 10? result += "0" + to_string(min): result += to_string(min);
    result += ":";
    sec < 10? result += "0" + to_string(sec): result += to_string(sec);

    return result;
}
