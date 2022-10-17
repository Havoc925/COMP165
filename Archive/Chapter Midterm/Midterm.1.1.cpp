//Midterm.1.1
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(const int num) {
    if(num == 1 || num == 0) return false;
    for(int i = 2; i <= num/2; i++) {
        if(num % i ==0) {
            return false;
        }
    } return true;
}

int main() {
    int check = 100;
    vector<int> prime;
    for(int i = 1; i < check; i++) {
        bool temp = isPrime(i);
        if(temp) prime.push_back(i);
    }
    cout << "List of prime numbers between 0 and " << check << ":"<< endl;
    for(int i = 0; i < prime.size(); i++) {
        cout << prime.at(i) << ", ";
    }
    return 0;
}