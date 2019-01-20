#ifndef PROJETC_READPMT_H
#define PROJETC_READPMT_H

#include <iostream>
#include <limits>

// Program to check whether the user provide a correct number for the PMT.

using namespace std;

bool check_PMT( double & n )
{
    cout << "Please provide the Pre-Menstrual Tension(PMT) : " ;
    while (!( cin >> n )|| n < 0)
    {
        if (cin.eof())
        {
            return false;
        }
        else if (cin.fail())
        {
            cout << "This is not a number. Please provide a correct Pre-Menstrual Tension(PMT) : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
    }
    return true;
}

#endif //PROJETC_READPMT_H
