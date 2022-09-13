//6.2.3.4
#include <iostream>
using namespace std;

void PrintGroceryPrice(string var1, int var2) {
    cout << "One " << var1 << " costs " << var2 << " dollars." << endl;
}

int main() {
    string groceryName1, groceryName2;
    int groceryPrice1, groceryPrice2;

    cin >> groceryName1;
    cin >> groceryName2;
    cin >> groceryPrice1;
    cin >> groceryPrice2;

    PrintGroceryPrice(groceryName1, groceryPrice1);
    PrintGroceryPrice(groceryName2, groceryPrice2);
    return 0;
}