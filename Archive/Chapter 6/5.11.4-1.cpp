//5.11.4-1

#include <iostream>
using namespace std;

bool ContainsSome(string inputString, char x) {

    for (int i = 0; i < inputString.size(); i++) {
        if (inputString[i] == x) {
            return true;
        }
    }
    return false;

}

int main() {
   string inString;
   char x;
   bool result;

   cin >> inString;
   cin >> x;

   result = ContainsSome(inString, x);

   if (result) {
		cout << "True, at least one character is equal to " << x << "." << endl;
	}
	else {
		cout << "False, all the characters are not equal to " << x << "." << endl;
	}

   return 0;
}