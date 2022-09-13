//6.2.3.1

#include <iostream>
using namespace std;

void PrintEmployeeEarnings(string name, int money) {
    cout << name << " earns " << money << " dollars per year." << endl;
}

int main() {
    string employeeName;
    int employeeEarnings;

    cin >> employeeName;
    cin >> employeeEarnings;

    PrintEmployeeEarnings(employeeName, employeeEarnings);

    return 0;
}