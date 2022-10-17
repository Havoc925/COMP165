//5.11.5-1

#include <iostream>
#include <vector>
using namespace std;

bool CheckSum(vector<int> &v, int x) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v.at(i);
    }
    return sum == x;
}

int main() {
    vector<int> inputVector;
    int size;
    int input;
    int i;
    int x;
    bool result;

    // Read the vector's size, and then the vector's elements
    cin >> size;
    for (i = 0; i < size; ++i) {
        cin >> input;
        inputVector.push_back(input);
    }

    cin >> x;

    result = CheckSum(inputVector, x);

    if (result) {
        cout << "True, the sum of all the elements is equal to " << x << "." << endl;
    }
    else {
        cout << "False, the sum of all the elements is not equal to " << x << "." << endl;
    }

    return 0;
}