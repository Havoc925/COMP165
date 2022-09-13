//6.10.2-1

#include <iostream>
using namespace std;

int main() {
    double forceValue;

    double& forceRef = forceValue;

    cin >> forceValue;

    cout << "Referenced force is " << forceRef << "." << endl;

    return 0;
}