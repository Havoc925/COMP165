//5.Assignment.1
#include <iostream>

using namespace std;

void init(char chart[13][6], string seatClass[13]) {
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 6; j++) {
            chart[i][j] = '*';
        }
    }
    for (int i = 0; i < 13; i++) {
        if (i <= 2) {
            seatClass[i] = "First Class";
        } else if (i < 7) {
            seatClass[i] = "Business Class";
        } else if (i < 11) {
            seatClass[i] = "Economy Class";
        }
    }
}
void showChart(char chart[13][6]) {
    cout << "        A  B  C  D  E  F" << endl;
    for (int i = 0; i < 13; i++) {
        cout << "Row " << i + 1 << "  ";
        if (i < 9) cout << " ";
        for (int j = 0; j < 6; j++) {
            cout << chart[i][j] << "  ";
        }
        cout << endl;
    }
}
char menu() {
    char choice;
    cout << "Reserve a seat (Yes (Y/y) or No (N/n))" << endl;
    cout << "Assign ticket type (first class (F/f), business class (B/b), or economy class (E/e))" << endl;
    cout << "Select desired seat (1-13 and A-F)" << endl;
    cin >> choice;
    return (char)tolower(choice);
}
void reserve(char chart[13][6]) {
    int row;
    char col;
    cout << "Enter the row number: ";
    cin >> row;
    cout << "Enter the column letter: ";
    cin >> col;
    if (chart[row - 1][col - 65] == '*') {
        chart[row - 1][col - 65] = 'X';
        cout << "Seat reserved." << endl;
    } else {
        cout << "Seat already reserved." << endl;
    }
}
void findSeat(char chart[13][6], string seatClass[13], char choice) {
    if(choice == 'f') {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 6; j++) {
                if(chart[i][j] == '*') {
                    chart[i][j] = 'X';
                    cout << "Seat reserved." << endl;
                    cout << "Seat: " << "Row " << i+1 << " " << (char)(j + 65) << endl;
                    cout << "Class: " << seatClass[i] << endl;
                    return;
                }
            }
        }
    } else if(choice == 'b') {
        for (int i = 2; i < 7; i++) {
            for (int j = 0; j < 6; j++) {
                if (chart[i][j] == '*') {
                    chart[i][j] = 'X';
                    cout << "Seat reserved." << endl;
                    cout << "Seat: " << "Row " << i+1 << " " << (char) (j + 65) << endl;
                    cout << "Class: " << seatClass[i] << endl;
                    return;
                }
            }
        }
    } else if(choice == 'e') {
        for (int i = 7; i < 12; i++) {
            for (int j = 0; j < 6; j++) {
                if (chart[i][j] == '*') {
                    chart[i][j] = 'X';
                    cout << "Seat reserved." << endl;
                    cout << "Seat: " << "Row " << i+1 << " " << (char) (j + 65) << endl;
                    cout << "Class: " << seatClass[i] << endl;
                    return;
                }
            }
        }
    }
}

int main() {
    char chart[13][6];
    string seatClass[13];
    init(chart,  seatClass);

    while(1) {
        showChart(chart);
        char choice = menu();
        if (choice == 'y') {
            reserve(chart);
        } else if (choice == 'n') {
            break;
        } else if (choice == 'f' || choice == 'b' || choice == 'e') {
            findSeat(chart, seatClass, choice);
        } else {
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}