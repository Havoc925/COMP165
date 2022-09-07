//5.8.1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    vector<int> lowerScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < lowerScores.size(); ++i) {
        cin >> lowerScores.at(i);
    }

    for(i = 0; i < lowerScores.size(); ++i) {
        if(lowerScores.at(i) <= 0) lowerScores.at(i) = 0;
        else lowerScores.at(i) -= 1;
    }

    for (i = 0; i < lowerScores.size(); ++i) {
        cout << lowerScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}