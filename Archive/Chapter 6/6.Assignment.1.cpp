//6.Assignment.1

#include <iostream>
using namespace std;

string reverseDigit(int num) {
    bool isNegative = false;
    int output = 0;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    string numStr = to_string(num);
    string revStr;
    for (int i = numStr.size() - 1; i >= 0; i--) {
        revStr += numStr[i];
    }
    if (isNegative) {
        revStr = "-" + revStr;
    }
    return revStr;
}
int main() {
    while(true) {
        int num;
        cout << "In: ";
        cin >> num;
        cout << "Out: " << reverseDigit(num) << endl;
    }
    return 0;
}