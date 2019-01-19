#ifndef PROJETC_PERIODS_H
#define PROJETC_PERIODS_H

#include <iostream>
#include<cmath>

#include "ReadInterests.h"
#include "ReadPMT.h"
#include "ReadPV.h"
using namespace std;

void ComputePeriods(){

    int n;
    double r, PV, PMT;

    if ( read_interests( r ) );
    if ( read_PV( PV ) );
    if ( read_PMT( PMT ) );

    n = log(1 + 1/(PMT/(PV*r)-1))/log(1+r);
    cout << "Number of periods is : " << n <<endl;


}
#endif //PROJETC_PERIODS_H
