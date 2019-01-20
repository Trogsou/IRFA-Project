#ifndef PROJETC_READPERIODS_H
#define PROJETC_READPERIODS_H

#include <iostream>
#include <limits>

// Program to check whether the user provide a correct positive number for the number of periods.

using namespace std;

bool check_periods( int & n )
{
    cout << "Please provide a positive number of periods: " ;
    while (!(cin >> n)|| n < 0)
    {
        if (cin.eof())
        {
            return false;
        }
        else if (cin.fail())
        {
            cout << "This is not a number. Please provide a correct positive number of periods : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
        else
        {
            cout << "This is not a positive number. Please enter a positive number of periods: ";
        }
    }
    return true;
}
#endif //PROJETC_READPERIODS_H
