//6.1.4.1

#include <iostream>
using namespace std;

int CalcVal(int x) {
    return x - 4;
}

int main() {
    int input;
    int result;

    cin >> input;

    result = CalcVal(input);

    cout << result << endl;

    return 0;
}