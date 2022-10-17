//5.15.1

#include <iostream>
#include <string>
using namespace std;

void PrintSalutation(string personName) {
    cout << "Hello, " << personName << endl;
}
void PrintSalutation(string personName, string a) {
    cout << a << ", " << personName << endl;
}


// Define void  PrintSalutation(string personName, string customSalutation)...

/* Your solution goes here  */

int main() {
    PrintSalutation("Holly", "Welcome");
    PrintSalutation("Sanjiv");

    return 0;
}