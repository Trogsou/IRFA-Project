#ifndef PROJETC_READPMT_H
#define PROJETC_READPMT_H

#include <iostream>
#include <limits>
using namespace std;

bool read_PMT( double & n )
{
    cout << "Please provide the Pre-Menstrual Tension(PMT) : " ;
    while ( ! ( cin >> n ) || n < 0)
    {
        if ( cin.eof() )
        {

            return false;
        }
        else if ( cin.fail() )
        {
            cout << "Number provided is incorrect. Please provide a correct Pre-Menstrual Tension(PMT) : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
    }
    return true;
}

#endif //PROJETC_READPMT_H
