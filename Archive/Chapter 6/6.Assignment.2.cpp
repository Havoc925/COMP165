//6.Assignment.2
#include <iostream>
using namespace std;
double calcCost(int membershipCost, int sessionCost, int sessions, int months, bool senior) {
    double cost = 0;
    if (sessions > 5) sessionCost = (double)sessionCost - ((double)sessionCost * 0.2);

    cost = (membershipCost * months) + (sessionCost * sessions);

    if (senior) cost = cost - (cost * 0.3);
    if (months >= 12) cost = cost - (cost * 0.15);

    return cost;
}
void displayInfo() {
    cout << "Welcome to Stay Healthy and Fit center." << endl;
    cout << "This program determines the cost of a new membership." << endl;
    cout << "If you are a senior citizen, then the discount is 30% of the regular membership price." << endl;
    cout << "If you buy membership for twelve months and pay today, the discount is 15%." << endl;
    cout << "If you buy and pay for 6 or more personal training session today, the discount on each session is 20%." << endl;
}
void getInfo(int& membershipCost, int& sessionCost, int& sessions, int& months, bool& senior){
    char selection;
    cout << "Enter the cost of a regular membership per month: ";
    cin >> membershipCost;
    cout << "Enter the cost of one personal training session: ";
    cin >> sessionCost;
    cout << "Are you a senior citizen? (Y,y/N,n): ";
    cin >> selection;
    senior = (tolower(selection) == 'y');
    cout << "Enter the number of personal training sessions bought: ";
    cin >> sessions;
    cout << "Enter the number of months you are paying for: ";
    cin >> months;
}

void membershipMenu() {
    int membershipCost, sessionCost, sessions, months;
    bool senior;
    displayInfo();
    getInfo(membershipCost, sessionCost, sessions, months, senior);
    cout << "The membership cost = $" << (double)calcCost(membershipCost, sessionCost, sessions, months, senior) << endl;
}

int main() {
    membershipMenu();
    return 0;
}