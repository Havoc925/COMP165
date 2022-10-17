//5.23.1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> words;

    int numWords;
    char searchChar;

    cin >> numWords;

    for(int i = 0; i < numWords; ++i) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    cin >> searchChar;

    for(int i = 0; i < (int)words.size(); ++i) {
        string word = words.at(i);
        for(int j = 0; j < (int)word.size(); ++j) {
            if(word.at(j) == searchChar) {
                cout << word << ",";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
