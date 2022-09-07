//5.8.4
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int maxVal;
    const int NUM_POINTS = 4;
    vector<int> dataPoints(NUM_POINTS);
    unsigned int i;

    cin >> maxVal;

    for (i = 0; i < dataPoints.size(); ++i) {
        cin >> dataPoints.at(i);
    }

    for(i = 0; i < dataPoints.size(); ++i) {
        if (dataPoints.at(i) > maxVal) {
            dataPoints.at(i) -= 4;
        }
    }

    for (i = 0; i < dataPoints.size(); ++i) {
        cout << dataPoints.at(i) << " " ;
    }
    cout << endl;

    return 0;
}