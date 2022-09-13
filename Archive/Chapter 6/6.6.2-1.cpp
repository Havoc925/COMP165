//6.6.2-2
#include <iostream>
using namespace std;

//Define a function OutputVals() that takes two integer parameters and outputs all integers starting with the first and ending with the second parameter in reverse order, each followed by a newline. The function does not return any value.
void OutputVals(int first, int second) {
    for (int i = second; i >= first; i--) {
        cout << i << endl;
    }
}

int main() {
    int input1;
    int input2;

    cin >> input1;
    cin >> input2;
    OutputVals(input1, input2);

    return 0;
}