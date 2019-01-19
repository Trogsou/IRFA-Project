#ifndef PROJETC_PMT_H
#define PROJETC_PMT_H

#include <iostream>
#include<cmath>
#include "ReadInterests.h"
#include "ReadPeriods.h"
#include "ReadPV.h"

using namespace std;

void ComputePMT(){

    int n;
    double r, PV, PMT;
    if ( read_periods( n ) );
    if ( read_interests( r ) );
    if ( read_PV( PV ) );
    PMT = r*PV*(1+1/(pow(1+r,n)-1));
    cout << "Value of the Pre-Menstrual Tension(PMT): " << PMT <<endl;


}
#endif //PROJETC_PMT_H
