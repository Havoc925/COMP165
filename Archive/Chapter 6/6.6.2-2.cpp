//6.6.2-2
#include <iostream>
using namespace std;

void PrintVal(int first, int second) {
    int product=-1;
    for(int i = first; i < second; i++) {
        if(i % 2 != 0) {
            product *= i;
        }
    }
    cout << product << endl;
}

int main() {
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;
    PrintVal(num1, num2);

    return 0;
}