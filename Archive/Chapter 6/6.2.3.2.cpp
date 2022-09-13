//6.2.3.2
#include <iostream>
using namespace std;

void PrintToVisitList(string a, string b, string c) {
    cout << "Top 3 places to visit:" << endl <<"A) " << a << endl << "B) " << b << endl << "C) " << c << endl;
}

int main() {
    string country1;
    string country2;
    string country3;

    cin >> country1;
    cin >> country2;
    cin >> country3;

    PrintToVisitList(country1, country2, country3);

    return 0;
}