//6.10.2-3

#include <iostream>
using namespace std;

bool AdjustGrade(int total, char &grade) {
    if (total >= 77 && total < 90 && grade != 'B') {
        grade = 'B';
        return true;
    } else {
        return false;
    }
}

int main() {
    int studentScore;
    char studentGrade;
    bool isChanged;

    cin >> studentScore;
    cin >> studentGrade;

    isChanged = AdjustGrade(studentScore, studentGrade);

    if (isChanged) {
        cout << "Grade is " << studentGrade << " after curving." << endl;
    }
    else {
        cout << "Grade " << studentGrade << " is not changed." << endl;
    }

    return 0;
}