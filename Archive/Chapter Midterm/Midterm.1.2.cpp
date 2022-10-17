//Midterm.1.2
#include <iostream>
#include <vector>
using namespace std;
double getSales(string divName) {
    double divSales;
    while (true) {
        cout << "Enter quarterly sales for " << divName << " division: $";
        cin >> divSales;
        if(divSales > 0.00) {
            break;
        }
        cout << "ERROR: SALES MUST BE GREATER THAN 0.00" << endl;
    }
    return divSales;
}
void findHighest(vector<string> divName, vector<double> divSales) {
    int highest = -1;
    if((divSales.at(0) > divSales.at(1))&& (divSales.at(0) > divSales.at(2))&& (divSales.at(0) > divSales.at(3))) highest = 0;
    else if((divSales.at(1) > divSales.at(0))&& (divSales.at(1) > divSales.at(2))&& (divSales.at(1) > divSales.at(3))) highest = 1;
    else if((divSales.at(2) > divSales.at(0))&& (divSales.at(2) > divSales.at(1))&& (divSales.at(2) > divSales.at(3))) highest = 2;
    else if((divSales.at(3) > divSales.at(0))&& (divSales.at(3) > divSales.at(1))&& (divSales.at(3) > divSales.at(2))) highest = 3;
    cout << divName.at(highest) << " division had the highest sales at: $" << divSales.at(highest) << endl;
}
int main() {
    vector<string> divName = {"NorthEast", "SouthEast", "NorthWest", "SouthWest"};
    vector<double> divSales;

    for(int i = 0; i < divName.size(); i++) {
        divSales.push_back(getSales(divName.at(i)));
    }
    findHighest(divName,divSales);

    return 0;
}