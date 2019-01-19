#ifndef PROJETC_READPV_H
#define PROJETC_READPV_H

#include <iostream>
#include <limits>
using namespace std;

bool read_PV( double & n )
{
    cout << "Please provide the present value : " ;
    while ( ! ( cin >> n ) || n < 0)
    {
        if ( cin.eof() )
        {

            return false;
        }
        else if ( cin.fail() )
        {
            cout << "Number provided is incorrect. Please provide a correct present value : ";
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
    }
    return true;
}
#endif //PROJETC_READPV_H
