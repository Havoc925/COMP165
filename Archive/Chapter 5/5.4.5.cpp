//5.4.5
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    unsigned int i;
    vector<int> hourlyTemp(NUM_VALS);

    for (i = 0; i < hourlyTemp.size(); ++i) {
        cin >> hourlyTemp.at(i);
    }

    for(i = 0; i < hourlyTemp.size(); ++i) {
        if(i != 0) cout << ", ";
        cout << hourlyTemp.at(i);
    }

    cout << endl;

    return 0;
}