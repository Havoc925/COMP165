//6.5.3.2
#include <iostream>
using namespace std;

double FindEmployeeTax(int income, int userDependents) {
    if (income < 300000) {
        if (userDependents <= 2) {
            return 0.2;
        } else if (userDependents <= 5) {
            return 0.1;
        } else {
            return 0;
        }
    } else if (income < 849999) {
        if (userDependents <= 2) {
            return 0.24;
        } else if (userDependents <= 5) {
            return 0.2;
        } else {
            return 0.2;
        }
    } else {
        if (userDependents <= 2) {
            return 0.31;
        } else if (userDependents <= 5) {
            return 0.24;
        } else {
            return 0.24;
        }
    }
}

int main() {
    int income;
    int userDependents;

    cin >> income;
    cin >> userDependents;

    cout << FindEmployeeTax(income, userDependents) << endl;

    return 0;
}