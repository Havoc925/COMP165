//6.37.1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SortVector(vector<int>& to_sort) {
    sort(to_sort.begin(), to_sort.end());
    return reverse(to_sort.begin(), to_sort.end());

}

int main() {
    vector<int> ints;
    int numInts;
    cin >> numInts;
    for (int i = 0; i < numInts; i++) {
        int temp;
        cin >> temp;
        ints.push_back(temp);
    }
    SortVector(ints);
    for (int i = 0; i < numInts; i++) {
        cout << ints.at(i) << ",";
    }
    cout << endl;
    return 0;
}
