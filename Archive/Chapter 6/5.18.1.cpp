//5.18.1
#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
    vector<int> userInts; // A vector to hold the user's input integers
    vector<int> reversedInts;
    int numInputs;
    cin >> numInputs;

    for(int i = 0; i < numInputs; ++i) {
        int userVal;
        cin >> userVal;
        userInts.push_back(userVal);
    }
    for(int i = 0; i < numInputs; ++i) {
        reversedInts.push_back(userInts.at(numInputs - 1 - i));
    }
    for(int i = 0; i < numInputs; ++i) {
        cout << reversedInts.at(i) << ",";
    }
    cout << endl;
    return 0;
}
