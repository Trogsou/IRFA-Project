#include <iostream>
#include<cmath>
#include"CheckPostivity.h"
#include"PMT.h"
#include"PV.h"
#include "Periods.h"
using namespace std;

int main() {

    int a;

    cout << "Which value do you want to compute ? " << endl;
    cout << "Please enter the number associated to the computation you want to make:" << endl;
    cout << "Computation of PMT = 1" << endl;
    cout << "Computation of PV = 2" << endl;
    cout << "Computation of periods = 3" << endl;
    cin >> a;

    switch(a) {
        case 1: {a=1;}
        ComputePMT();
        break;

        case 2: {a=2;}
        ComputePV();
        break;

        case 3 : {a=3;}
        ComputePeriods();
        break;
        default: { cout <<"Sorry I didn't understand your request";}

    }

}