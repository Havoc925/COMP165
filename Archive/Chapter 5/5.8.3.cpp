//5.8.3
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    vector<int> bonusScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < bonusScores.size(); ++i) {
        cin >> bonusScores.at(i);
    }

    for (i = 0; i < bonusScores.size(); ++i) {
        if(i != bonusScores.size() - 1)
        bonusScores.at(i) += bonusScores.at(i+1);
    }

    for (i = 0; i < bonusScores.size(); ++i) {
        cout << bonusScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}