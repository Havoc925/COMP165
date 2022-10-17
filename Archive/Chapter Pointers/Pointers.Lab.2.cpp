//Pointers.Lab.2
#include <iostream>

using namespace std;

struct student {
    string  FirstName;
    string  LastName;
    int     QuizScores[10];
    char    LetterGrade;
};

char calcLetterGrade(student students[], int i) {
    int sum = 0;
    for(int j = 0; i < 10; i++) {
        sum += students[i].QuizScores[j];
    }
    int avg = sum / 10;
    if(avg >= 90) {
        return 'A';
    } else if(avg >= 80) {
        return 'B';
    } else if(avg >= 70) {
        return 'C';
    } else if(avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

void get_student_info(int numStudents, student students[]) {
    for(int i = 0; i < numStudents; i++) {
        cout << "Enter students first name: ";
        cin >> students[i].FirstName;
        cout << "Enter students last name: ";
        cin >> students[i].LastName;

        for(int j = 0; j < 10; j++) {
            cout << "Enter quiz grade " << j + 1 << ": ";
            cin >> students[i].QuizScores[j];
        }
    }
}

void stuSort(int numStudents, student students[]) {
    for(int i = 0; i < numStudents; i++) {
        for(int j = 0; j < numStudents - 1; j++) {
            if(students[j].LetterGrade > students[j + 1].LetterGrade) {
                student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void print_scores(const student s) {
    cout << s.QuizScores[0];
    for(int i = 1; i < 10; i++) {
        cout << ", " << s.QuizScores[i];
    }
}

void print_student_info(int numStudents, student students[]) {
    stuSort(numStudents, students);
    for(int i = 0; i < numStudents; i++) {
        cout << "Student name: " << students[i].FirstName << " " << students[i].LastName << endl;
        cout << "   Quiz Scores:  ";
        print_scores(students[i]);
        cout << endl << "   Letter Grade: " << calcLetterGrade(students, i) << endl;
    }
}

int main() {
    int numStudents = 0;

    cout << "Enter Number of Students: ";
    cin >> numStudents;
    student studentArr[numStudents];

    get_student_info(numStudents, studentArr );
    print_student_info(numStudents, studentArr );
    return 0;
}
