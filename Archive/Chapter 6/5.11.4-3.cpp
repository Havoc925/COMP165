//5.11.4-3
#include <iostream>
using namespace std;

void FindPattern(string in) {
    if(in.find("ly") != string::npos) {
        cout << in << " contains ly." << endl;
    } else {
        cout << in << " does not contain ly." << endl;
    }
}

int main() {
    int i;
    string inputString;

    cin >> inputString;

    FindPattern(inputString);

    return 0;
}