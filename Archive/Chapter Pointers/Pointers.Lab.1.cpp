//Pointers.Lab.1
#include <iostream>

using namespace std;

struct student {
    string  FirstName;
    string  LastName;
    int     QuizGrades[10];
    char    LetterGrade;
};

void get_student_info(int numStudents, student students[]) {
    for(int i = 0; i < numStudents; i++) {
        cout << "Enter students first name: ";
        cin >> students[i].FirstName;
        cout << "Enter students last name: ";
        cin >> students[i].LastName;
        cout << "Enter students letter grade: ";
        cin >> students[i].LetterGrade;

        students[i].LetterGrade = toupper(students[i].LetterGrade); // avoid problems with sort
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

void print_student_info(int numStudents, student students[]) {
    stuSort(numStudents, students);
    for(int i = 0; i < numStudents; i++) {
        cout << "Student name: " << students[i].FirstName << " " << students[i].LastName << endl;
        cout << "Letter Grade: " << students[i].LetterGrade << endl << endl;
    }
}

int main() {
    int numStudents = 0;

    cout << "Enter Number of Students: ";
    cin >> numStudents;
    double average = 0;
    student studentArr[numStudents];

    get_student_info(numStudents, studentArr );
    print_student_info(numStudents, studentArr );
    return 0;
}
