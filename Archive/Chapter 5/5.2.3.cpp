//5.2.3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    vector<int> courseGrades(NUM_VALS);
    int i;

    for (i = 0; i < courseGrades.size(); ++i) {
        cin >> courseGrades.at(i);
    }

    for(i = 0; i < courseGrades.size(); ++i) {
        cout << courseGrades.at(i) << " ";
    }
    cout << endl;
    for(i = 0; i < courseGrades.size(); ++i) {
        cout << courseGrades.at(courseGrades.size() - i - 1) << " ";
    }
    cout << endl;

    return 0;
}