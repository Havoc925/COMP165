//6.10.2-2

#include <iostream>
using namespace std;

void SwapRank(char& first, char& second) {
    char temp = first;
    first = second;
    second = temp;
}

int main() {
    char rank1;
    char rank2;

    cin >> rank1;
    cin >> rank2;

    SwapRank(rank1, rank2);

    cout << rank1 << " " << rank2 << endl;

    return 0;