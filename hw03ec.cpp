
#include "Time.h"
#include "ExtendedTime.h"
#include "Invoice.h"


int main ()
{

    // default and non default called Time objects
    Time bob(11,2,3);
    Time bobDefault;

    // default and non default called Invoice objects
    Invoice bobby(2,4,1);
    Invoice bobbyDefault;

    // default and non default called ExtendedTime objects
    ExtendedTime bobbies(4,23,1, EASTERN);
    ExtendedTime bobbiesDefault;


    cout << "Printing objects called with alternate constructors:\n";
    cout << "bob " << bob.PrintTime();
    cout << endl;
    cout << "bobby " <<(bobby);
    cout << endl;
    cout << "bobbies " <<(bobbies);

    cout << "\n\nPrinting objects called with default constructors:\n";
    cout << "bob " << bobDefault.PrintTime();
    cout << endl;
    cout << "bobby " <<(bobbyDefault);
    cout << endl;
    cout << "bobbies " <<(bobbiesDefault);


    return 0;
}