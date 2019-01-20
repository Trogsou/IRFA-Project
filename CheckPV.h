#ifndef PROJETC_READPV_H
#define PROJETC_READPV_H

#include <iostream>
#include <limits>

// Program to check whether the user provide a correct number for the present value.

using namespace std;

bool check_PV( double & n )
{
    cout << "Please provide the present value : " ;
    while (!(cin >> n)|| n < 0)
    {
        if (cin.eof())
        {
            return false;
        }
        else if (cin.fail())
        {
            cout << "This is not a number. Please provide a correct present value : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
    }
    return true;
}
#endif //PROJETC_READPV_H
