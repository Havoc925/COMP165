//6.36.1

#include <iostream>
#include <vector>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
    for (int i = 0; i < nameVec.size(); i++) {
        if (nameVec.at(i) == contactName) {
            return phoneNumberVec.at(i);
        }
    } return "None";
}

int main() {
   vector<string> names;
   vector<string> phoneNumbers;
   int numContacts;
   string contactName;
   cin >> numContacts;

   for (int i = 0; i < numContacts; i++) {
       string input, name, phoneNumber;
       cin >> input;

       name = input.substr(0, input.find(","));
       phoneNumber = input.substr(input.find(",") + 1);

       names.push_back(name);
       phoneNumbers.push_back(phoneNumber);
   }
   cin >> contactName;
   cout << GetPhoneNumber(names, phoneNumbers, contactName) << endl;

    return 0;
}
