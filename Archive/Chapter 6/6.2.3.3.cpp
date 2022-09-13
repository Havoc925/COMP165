//6.2.3.3

#include <iostream>
#include <iomanip>
using namespace std;

void PrintDifferenceOf2(int x, int y) {
    cout << fixed << setprecision(2) << "Difference: " << (double)(x - y) << endl;
}

int main() {
    double x;
    double y;

    cin >> x;
    cin >> y;

    PrintDifferenceOf2(x, y);

    return 0;
}