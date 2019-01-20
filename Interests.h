#ifndef PROJETC_INTERESTS_H
#define PROJETC_INTERESTS_H

#include "CheckPeriods.h"
#include "CheckPMT.h"
#include "CheckPV.h"
#include "ObjectiveFunction.h"

using namespace std;

void ComputeInterests(){

    int n;
    double PV, PMT;
    double temp;

    if (check_periods(n));
    if (check_PV(PV));
    if (check_PMT(PMT));


double r0=0.01;
double r1=1;

    while (abs(f(PV,PMT,n,r1))> 0.001){
        temp = r1;
        r1 = r1 - (f(PV,PMT,n,r1)*(r1 - r0))/(f(PV,PMT,n,r1)-f(PV,PMT,n,r0));
        r0 = temp;
    }

    cout << "Interests rate: " << (r1*n)*100 << "%." << endl;

}

#endif //PROJETC_INTERESTS_H
