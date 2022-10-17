//5.21.1
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<double> usrVals;
    int numInts;
    double largestVal = 0;
    cin >> numInts;

    for(int i = 0; i < numInts; ++i) {
        double usrInt;
        cin >> usrInt;
        usrVals.push_back(usrInt);

        if (usrInt > largestVal) {
            largestVal = usrInt;
        }
    }
    for(int i = 0; i < numInts; ++i) {
        cout << setprecision(2) << fixed << (usrVals.at(i) / largestVal) << " ";
    }
    cout << endl;
    return 0;
}