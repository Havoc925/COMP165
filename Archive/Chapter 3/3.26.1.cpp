//
// Created by Tyler on 8/30/2022.
//
#include <iostream>
using namespace std;

int main() {
    int change;
    cin >> change;
    if(change < 1) {
        cout << "No change" << endl;
        return 1;
    } else {
        for (int i = 0; i < 5; ++i) {
            //cout << "DEBUG: change = " << change << endl;
            const int changeType[] = {100, 25, 10, 5, 1};
            const string changeName[] = {"Dollar", "Quarter", "Dime", "Nickel", "Penny"};
            const string changeName1[] = {"Dollars", "Quarters", "Dimes", "Nickels", "Pennies"};

            int changeCount = change / changeType[i];
            if(changeCount > 0) {
                if(changeCount == 1) {
                    cout << changeCount << " " << changeName[i] << endl;
                } else {
                    cout << changeCount << " " << changeName1[i] << endl;
                }
            }
            change -= changeCount * changeType[i];
        }
    }
    return 0;
}