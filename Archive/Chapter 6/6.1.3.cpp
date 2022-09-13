//6.1.3

#include <iostream>
using namespace std;

double CalcPyramidVolume(double length, double width, double height) {
    return length * width * height / 3;
}

int main() {
    double userLength;
    double userWidth;
    double userHeight;

    cin >> userLength;
    cin >> userWidth;
    cin >> userHeight;

    cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

    return 0;
}