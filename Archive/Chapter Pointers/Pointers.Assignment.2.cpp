//Pointers.Assignment.2
#include <iostream>
#include <random>
using namespace std;

int* doubleArr(int *arr, int arrSize) {
    int* newArr = new int[arrSize*2];

    for(int i = 0; i < arrSize; i++) {
        *(newArr + i) = *(arr + i);
    }
    for(int i = arrSize; i < arrSize*2; i++) {
        *(newArr + i) = 0;
    }
    return newArr;
}

int main() {
    int arr[20];
    for(int i = 0; i < 20; i++) {
        arr[i] = rand();
    }
    cout << doubleArr(arr,20) << endl;
}
