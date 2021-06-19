//
// Created by Belal Zahran on 6/18/21.
//

#include "Invoice.h"
#include "Time.h"

// default ExtendedTime constructor
Invoice::Invoice() : purchase_time(0,0,0)
{
}
// alternate ExtendedTime constructor
Invoice::Invoice(int hours, int min, int sec) : purchase_time(hours, min, sec)
{
}

// destructor
Invoice::~Invoice()
= default;


// overloaded ostream operator
ostream& operator<<(ostream& o, const Invoice& x)
{
    return o << x.purchase_time.PrintTime();
}
