//4.20.1

#include <iostream>
using namespace std;

int main() {

    string usrStr;
    getline(cin, usrStr);

    for (int i = 0; i < (int)usrStr.length(); i++) {
        if (isalpha(usrStr.at(i))) {
            cout << usrStr.at(i);
        }
    }
    cout << endl;
    return 0;

}