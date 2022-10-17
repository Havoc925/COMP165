//6.11.5
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void  SquareVector(vector<double> inputVector, vector<double>& squared) {
    for (int i = 0; i < inputVector.size(); i++) {
        squared.push_back(inputVector.at(i) * inputVector.at(i));
    }
}
int main() {
    int i;
    vector<double> inputVector;
    int size;
    double input;
    vector<double> squared;

    cin >> size;
    for (i = 0; i < size; ++i) {
        cin >> input;
        inputVector.push_back(input);
    }

    SquareVector(inputVector, squared);

    for (i = 0; i < squared.size(); ++i) {
        cout << fixed << setprecision(2) << squared.at(i) << endl;
    }

    return 0;
}