
#include "Time.h"
#include "ExtendedTime.h"

// array of strings for printing time zone
static const string timeZoneString[] =
{
        "Pacific", "Mountain", "Central", "Eastern"
};

// default ExtendedTime constructor
  ExtendedTime::ExtendedTime() : Time(0,0,0)
  {
      zone = PACIFIC;
  }

// alternate ExtendedTime constructor
ExtendedTime::ExtendedTime(int hours, int min, int sec, TimeZone zone)
: Time(hours, min, sec)
{
  this->zone = zone;
};

  // destructor
ExtendedTime::~ExtendedTime()
= default;

// function to return the zone
TimeZone ExtendedTime:: GetZone() const
{
    return zone;
}

// overloaded ostream operator
ostream& operator<<(ostream& o, const ExtendedTime& x)
{
    return o << timeZoneString[TimeZone(x.GetZone())] << " " << x.PrintTime();
}