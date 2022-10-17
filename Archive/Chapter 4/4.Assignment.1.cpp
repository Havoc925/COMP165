//4.Assignment.1

#include <iostream>
using namespace std;

int main() {
    string input;
    char c;
    while (1) {
        cout << "Enter Y/y to convert a telephone number from" << endl << "letters to digits." << endl
             << "Enter any other letter to terminate the program." << endl;
        cin >> c;
        if (c == 'Y' || c == 'y') {
            cout << "Enter a telephone number using letters:";
            cin.ignore();
            getline(cin, input);
            cout << endl << "The corresponding telephone number is:" << endl;

            for(int i = 0; i <= 7; i++) {
                if(i == 3) cout << "-";
                if((tolower(input[i]) >= 'a' && tolower(input[i]) <= 'z')) {
                    if(tolower(input[i]) >= 'a' && tolower(input[i]) <= 'c') cout << "2";
                    else if(tolower(input[i]) >= 'd' && tolower(input[i]) <= 'f') cout << "3";
                    else if(tolower(input[i]) >= 'g' && tolower(input[i]) <= 'i') cout << "4";
                    else if(tolower(input[i]) >= 'j' && tolower(input[i]) <= 'l') cout << "5";
                    else if(tolower(input[i]) >= 'm' && tolower(input[i]) <= 'o') cout << "6";
                    else if(tolower(input[i]) >= 'p' && tolower(input[i]) <= 's') cout << "7";
                    else if(tolower(input[i]) >= 't' && tolower(input[i]) <= 'v') cout << "8";
                    else if(tolower(input[i]) >= 'w' && tolower(input[i]) <= 'z') cout << "9";
                } else {
                    cout << "";
                }
            }
            cout << endl;
        } else {
            return 0;
        }
    }
}
