#include <iostream>
#include <cmath>
#include <unistd.h>
#include "Interests.h"
#include "PMT.h"
#include "PV.h"
#include "Periods.h"

using namespace std;

int main() {

    int a;

    cout << "Which value do you want to compute ? " << endl;
    sleep(1);
    cout << "Please enter the number associated to the computation you want to make:" << endl;
    sleep(1);
    cout << "Computation of the Pre-Menstrual Tension(PMT) = 1" << endl;
    sleep(1);
    cout << "Computation of PV = 2" << endl;
    sleep(1);
    cout << "Computation of the number of periods = 3" << endl;
    sleep(1);
    cout << "Computation of the interest rate = 4" << endl;
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

        case 4 : {a=4;}
        ComputeInterests();
        break;

        default:
            {
                cout <<"Sorry I didn't understand your request";
            }

    }

}