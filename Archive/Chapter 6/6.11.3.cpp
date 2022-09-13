//6.11.3

#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds(vector<int>& sortVector) {
    int temp = sortVector.at(0);
    sortVector.at(0) = sortVector.at(sortVector.size() - 1);
    sortVector.at(sortVector.size() - 1) = temp;
}

int main() {
    vector<int> sortVector(4);
    unsigned int i;
    int userNum;

    for (i = 0; i < sortVector.size(); ++i) {
        cin >> userNum;
        sortVector.at(i) = userNum;
    }

    SwapVectorEnds(sortVector);

    for (i = 0; i < sortVector.size(); ++i) {
        cout << sortVector.at(i) << " ";
    }
    cout << endl;

    return 0;
}