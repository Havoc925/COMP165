//4.Assignment.2
#include <iostream>
#include <map>
using namespace std;

int main() {
    // year month rainfall
    const int MONTHS = 12;
    int years;
    double totalRainfall = 0, averageRainfall = 0, rain = 0;
    start:
    cout << "Enter the number of years: ";
    cin >> years;
    if(years < 1) {
        cout << "Invalid number of years." << endl;
        goto start;
    } else {
        for(int i = 1; i <= years; i++) {
            for (int j = 1; j <= MONTHS; j++) {
                cout << "Enter the rainfall for year " << i << " month " << j << ": ";
                cin >> rain;
                totalRainfall += rain;
            }
        }
        cout << endl << endl;
        cout << "The total rainfall for " << years << " years is " << totalRainfall << " inches." << endl;
        cout << "The average monthly rainfall for " << years << " years is " << totalRainfall / (years * MONTHS) << " inches." << endl;
    }
}
