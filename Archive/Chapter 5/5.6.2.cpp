//5.6.2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> countDown(0);
    int newSize;
    unsigned int i;

    cin >> newSize;

    /*Resize vector countDown to have newSize elements. Populate the vector with integers {newSize, newSize - 1, …, 1}.*/
    countDown.resize(newSize);
    for (i = 0; i < countDown.size(); ++i) {
        countDown.at(i) = newSize - i;
    }

    for (i = 0; i < countDown.size(); ++i) {
        cout << countDown.at(i) << " ";
    }
    cout << "Go!" << endl;

    return 0;
}