#ifndef PROJETC_PV_H
#define PROJETC_PV_H

#include <iostream>
#include <cmath>
#include "CheckPeriods.h"
#include "CheckInterests.h"
#include "CheckPMT.h"

// Computation of the present value

using namespace std;

void ComputePV(){

    int n;
    double r, PV, PMT;

    if(check_periods(n));
    if(check_interests(r));
    if(check_PMT(PMT));

    PV = PMT/(r*(1+1/(pow(1+r,n)-1)));
    cout << "Present Value of the loan : " << PV <<endl;

}
#endif //PROJETC_PV_H
