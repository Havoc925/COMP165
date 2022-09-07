//4.16.1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num, max = 0, sum = 0, count = 0;
    double avg;

    cin >> num;

    while (num >= 0) {
        if (num > max) {
            max = num;
        }
        sum += num;
        count++;
        cin >> num;
    }
    avg = (double)sum / count;
    cout << max << " " << fixed << setprecision(2) << avg << endl;

    return 0;
}
