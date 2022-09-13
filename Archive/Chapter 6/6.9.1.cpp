//6.9.1
#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius) {
    double valueKelvin;

    valueKelvin = valueCelsius + 273.15;

    return valueKelvin;
}

double KelvinToCelsius(double valueCelsius) {
    double valueKelvin;

    valueKelvin = valueCelsius - 273.15;

    return valueKelvin;
}

int main() {
    double valueC;
    double valueK;

    valueC = 10.0;
    cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

    cin >> valueK;
    cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

    return 0;
}