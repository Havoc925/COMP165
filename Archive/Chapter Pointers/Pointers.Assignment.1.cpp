//Pointers.Assignment.1
#include <iostream>

using namespace std;

void sortScores(int* ptr, int numScores) {
    for(int i = 0; i < numScores; i++) {
        for(int j = 0; j < numScores - 1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

double calcAverageScore(int* ptr, int numScores) {
    int sum = 0;
    for(int i = 0; i < numScores; i++) {
        sum += *(ptr + i);
    }
    return (double)sum/(double)numScores;
}

int main() {
    int numScores;
    cout << "Enter number of scores: ";
    cin >> numScores;

    int *testScores = new int[numScores];
    for(int i = 0; i< numScores;) {
        cout << "Score " << i + 1 << ": ";
        cin >> *(testScores + i);
        if(*(testScores + i) > 0) {
            i++;
        } else {
            cout << "ERROR: Score must be positive" << endl;
        }
    }
    sortScores(testScores, numScores);

    cout << "Test Scores: " << endl;
    for(int i = 0; i < numScores; i++) {
        cout << *(testScores + i) << ", ";
    }

    cout << endl << "Average Score: " << calcAverageScore(testScores,numScores) << endl;

}