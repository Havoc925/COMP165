//5.11.4-2

#include <iostream>
#include <vector>
using namespace std;

void InspectCharacters(string in, char x, vector<bool>& results) {
    for (int i = 0; i < in.size(); i++) {
        if (in[i] == x) {
            results.push_back(true);
        } else {
            results.push_back(false);
        }
    }
}

int main() {
    string inputString;
    int i;
    char x;
    vector<bool> results;

    cin >> inputString;
    cin >> x;

    InspectCharacters(inputString, x, results);

    for (i = 0; i < results.size(); ++i) {
        if (results.at(i)) {
            cout << inputString.at(i) << " is not equal to " << x << endl;
        }
        else {
            cout << inputString.at(i) << " is equal to " << x << endl;
        }
    }

    return 0;
}