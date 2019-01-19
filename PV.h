#ifndef PROJETC_PV_H
#define PROJETC_PV_H

#include <iostream>
#include<cmath>
#include "ReadPeriods.h"
#include "ReadInterests.h"
#include "ReadPMT.h"

using namespace std;

void ComputePV(){

    int n;
    double r, PV, PMT;
    if ( read_periods( n ) );
    if ( read_interests( r ) );
    if ( read_PMT( PMT ) );
    PV = PMT/(r*(1+1/(pow(1+r,n)-1)));
    cout << "Present Value of the loan : " << PV <<endl;


}
#endif //PROJETC_PV_H
