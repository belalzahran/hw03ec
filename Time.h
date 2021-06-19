#ifndef TIME_H_
#define TIME_H_

#include <ostream>
#include <iostream>
using namespace std;



class Time
{

public:
    Time();
    Time(int hours, int min, int sec);
    ~Time();

    string PrintTime() const;
protected:

    int hours;
    int min;
    int sec;
};




#endif