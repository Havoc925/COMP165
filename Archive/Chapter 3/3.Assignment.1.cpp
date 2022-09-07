//3.Assignment.1
#include <iostream>
using namespace std;
int main() {
    // Define discount constants
    const double DISCOUNT_10 = 0.10, DISCOUNT_20 = 0.20, DISCOUNT_30 = 0.30, DISCOUNT_5 = 0.05;

    // Define variables
    double roomCost, totalCost, salesTax, totalBill, discountPercent, tax, discount;
    int numRooms, numDays;

    // Prompt user for input
    cout << "Enter the cost of renting one room: ";
    cin >> roomCost;
    cout << "Enter the number of rooms booked: ";
    cin >> numRooms;
    cout << "Enter the number of days the rooms are booked: ";
    cin >> numDays;
    cout << "Enter the sales tax (as a percent): ";
    cin >> salesTax;

    // Calculate discount
    if (numRooms >= 30) {
        discountPercent = DISCOUNT_30;
    } else if (numRooms >= 20) {
        discountPercent = DISCOUNT_20;
    } else if (numRooms >= 10) {
        discountPercent = DISCOUNT_10;
    } else {
        discountPercent = 0;
    }
    if(numDays >= 3) {
        discountPercent += DISCOUNT_5;
    }

    // Calculate total cost
    totalCost = roomCost * numRooms * numDays;
    discount = totalCost * discountPercent;
    tax = (totalCost - discount)* (salesTax / 100);
    totalBill = totalCost - tax;

    cout << "The cost of renting one room: $" << roomCost << endl;
    cout << "The discount on each room as a percent: " << discountPercent * 100 << "%" << endl;
    cout << "The number of rooms booked: " << numRooms << endl;
    cout << "The number of days the rooms are booked: " << numDays << endl;
    cout << "The total cost of the rooms: $" << totalCost << endl;
    cout << "The sales tax: $" << totalCost * (salesTax / 100) << endl;
    cout << "The total billing amount: $" << totalBill << endl;

    return 0;
}