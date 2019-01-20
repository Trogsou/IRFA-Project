#ifndef PROJETC_TEST_H
#define PROJETC_TEST_H

#include <iostream>
#include <cmath>

double f(double PV, double PMT, int n, double r) {
    double f;
    f= ((PMT/PV - r)*(pow(1+r,n)-1)-r);
    return f;

}
#endif //PROJETC_TEST_H
