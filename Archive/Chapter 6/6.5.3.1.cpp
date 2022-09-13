//6.5.3.1
#include <iostream>
using namespace std;

double FindEmployeeTax(int age) {
    if (age <= 20) {
        return 0.38;
    } else if (age < 40) {
        return 0.25;
    } else {
        return 0.08;
    }
}

int main() {
    int userAge;

    cin >> userAge;

    cout << FindEmployeeTax(userAge) << endl;

    return 0;
}