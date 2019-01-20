#ifndef PROJETC_PMT_H
#define PROJETC_PMT_H

#include <iostream>
#include <cmath>
#include "CheckInterests.h"
#include "CheckPeriods.h"
#include "CheckPV.h"

// Computation of the PMT

using namespace std;

void ComputePMT(){

    int n;
    double r, PV, PMT;

    if(check_periods(n));
    if(check_interests(r));
    if(check_PV(PV));

    PMT = r*PV*(1+1/(pow(1+r,n)-1));
    cout << "Value of the Pre-Menstrual Tension(PMT): " << PMT <<endl;

}
#endif //PROJETC_PMT_H
