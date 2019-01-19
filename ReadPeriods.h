#ifndef PROJETC_READPERIODS_H
#define PROJETC_READPERIODS_H

#include <iostream>
#include <limits>
using namespace std;

bool read_periods( int & n )
{
    cout << "Please provide the number of periods:  " ;
    while ( ! ( cin >> n ) || n < 0)
    {
        if ( cin.eof() )
        {

            return false;
        }
        else if ( cin.fail() )
        {
            cout << "Number provided is incorrect. Please provide a correct number of periods : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
        else
        {
            cout << "Number is negative. Please enter a positive one: ";
        }
    }
    return true;
}
#endif //PROJETC_READPERIODS_H
