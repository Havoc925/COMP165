//4.26.1

#include <iostream>
using namespace std;

int main() {
    int x1, y1, a1, x2, y2, a2;
    cin >> x1 >> y1 >> a1 >> x2 >> y2 >> a2;

    for(int i = -10; i <=10; i++) {
        for(int j = -10; j <= 10; j++) {
            if(((x1 * i) + (y1 * j) == a1) && ((x2 * i) + (y2 * j) == a2)) {
                cout << "x = " << i << ", y = " << j << endl;
                return 0;
            }
        }
    }
    cout << "There is no solution" << endl;
    return 0;
}
