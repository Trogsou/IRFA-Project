#ifndef PROJETC_PERIODS_H
#define PROJETC_PERIODS_H

#include <iostream>
#include <cmath>
#include "CheckInterests.h"
#include "CheckPMT.h"
#include "CheckPV.h"

// Computation of the number of periods

using namespace std;

void ComputePeriods(){

    double n;
    double r, PV, PMT;

    if(check_interests(r));
    if(check_PV(PV));
    if(check_PMT(PMT));

    n = log(1 + 1/(PMT/(PV*r)-1))/log(1+r);
    cout << "Number of periods is : " << round(n) <<endl;

}
#endif //PROJETC_PERIODS_H
