#ifndef EXTENDEDTIME_H_
#define EXTENDEDTIME_H_

#include "Time.h"


// enum timezone type
typedef enum
{
    PACIFIC, MOUNTAIN, CENTRAL, EASTERN
}TimeZone;



class ExtendedTime: public Time
{
    // friend overloaded ostream operator
    friend ostream& operator<<(ostream& o, const ExtendedTime& x);


public:
    ExtendedTime();
    ExtendedTime(int hours, int min, int sec, TimeZone zone);
    ~ExtendedTime();

    TimeZone GetZone() const;

private:
    TimeZone zone;
};




#endif