#ifndef PROJETC_READINTEREST_H
#define PROJETC_READINTEREST_H

#include <iostream>
#include <limits>

// Program to check whether the user provide a correct number for the interest rate.

using namespace std;

bool check_interests( double & n )
{
    cout << "Please provide the periodic interest rate (e.g 0.02) : " ;
    while (!(cin >> n)|| n < 0)
    {
        if (cin.eof())
        {
            return false;
        }
        else if (cin.fail())
        {
            cout << "This is not a number. Please provide a correct periodic interest rate (e.g 0.02) : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
    }
    return true;
}
#endif //PROJETC_READINTEREST_H
