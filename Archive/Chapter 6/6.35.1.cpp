//6.35.1
#include <iostream>
#include <vector>
using namespace std;

bool IsVectorMult10(vector<int> myVec) {
    for(int i = 0; i < (int)myVec.size(); ++i) {
        if(myVec.at(i) % 10 != 0) {
            return false;
        }
    }
    return true;
}
bool IsVectorNoMult10(vector<int> myVec) {
    for(int i = 0; i < (int)myVec.size(); ++i) {
        if(myVec.at(i) % 10 == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> ints;

    if(IsVectorMult10(ints)) {
        cout << "all multiples of 10" << endl;
    }
    else if (IsVectorNoMult10(ints)) {
        cout << "no multiples of 10" << endl;
    } else {
        cout << "mixed values" << endl;
    }

    return 0;
}
