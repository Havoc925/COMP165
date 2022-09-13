//6.3.1
 #include <iostream>
using namespace std;

double MphAndMinutesToMiles(int a, int b){
    double c = (double)b / 60;
    return (double) a * c;
}

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}