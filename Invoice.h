//
// Created by Belal Zahran on 6/18/21.
//

#ifndef HW03EC_INVOICE_H
#define HW03EC_INVOICE_H
#include "Time.h"

class Invoice
{

    friend ostream& operator<<(ostream& o, const Invoice& x);
public:

    Invoice();
    Invoice(int hours, int min, int sec);
    ~Invoice();

private:
    Time purchase_time;



};







#endif //HW03EC_INVOICE_H
