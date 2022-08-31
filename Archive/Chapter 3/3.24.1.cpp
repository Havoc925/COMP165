//
// Created by Tyler on 8/30/2022.
//
#include <iostream>
using namespace std;

int main() {
    int highwayNumber;
    cin >> highwayNumber;
    if(highwayNumber < 1 || highwayNumber > 999 || highwayNumber == 200) {
        cout << highwayNumber <<" is not a valid interstate highway number." << endl;
        return 0;
    }
    if (highwayNumber < 100) {
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
        } else {
            cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
        }
    } else {
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going east/west." << endl;
        } else {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going north/south." << endl;
        }
    }
    return 0;
}