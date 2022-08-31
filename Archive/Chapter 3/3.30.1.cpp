//
// Created by Tyler on 8/30/2022.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string usrStr;
    string abrivStr[] = {"BFF", "IDK", "JK", "TMI", "TTYL"};
    string abrivStrFull[] = {"best friend forever", "I don't know", "just kidding", "too much information", "talk to you later"};
    cout << "Enter text:" << endl;
    getline(cin, usrStr);
    cout << "You entered: " << usrStr << endl;

    for (int i = 0; i < 5; i++) {
        if (usrStr.find(abrivStr[i]) != string::npos) {
            cout << abrivStr[i] << ": "<< abrivStrFull[i] << endl;
        }
    }
    return 0;
}
