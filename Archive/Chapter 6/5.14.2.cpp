//5.14.2

#include <iostream>
using namespace std;

int NumberOfPennies(int a = 0, int b = 0) {
    return (a * 100) + b;
}

int main() {
    cout << NumberOfPennies(5, 6) << endl; // Should print 506
    cout << NumberOfPennies(4) << endl;    // Should print 400
    return 0;
}