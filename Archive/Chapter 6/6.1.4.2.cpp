//6.1.4.2

#include <iostream>
using namespace std;

int ComputeVal(int x, int y) {
    return x + (y * 8);
}

int main() {
    int input1, input2;
    int result;

    cin >> input1;
    cin >> input2;

    result = ComputeVal(input1, input2);

    cout << result << endl;

    return 0;
}