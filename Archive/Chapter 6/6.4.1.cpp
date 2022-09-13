//6.4.1
#include <iostream>
using namespace std;

double CalcBaseArea(double baseLength, double baseWidth) {
    return baseLength * baseWidth;
}

double CalcPyramidVolume(double userLength, double userWidth, double userHeight) {
    return CalcBaseArea(userLength, userWidth) * (userHeight / 3);
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