/*
========= practice 3   ==================================
*/

#include <iostream>
using namespace std;

int main() {

int NowTime = 11; //this time should use 24hr format.
string result = (NowTime < 12)? "Good day." : "Good evening.";

if (NowTime < 9) {
cout << "ZZZZZZZZ" << endl;
}
else if (NowTime == 9) {
cout << "Breakfast time!" << endl;
}
else if (NowTime < 15) {
cout << "Hungry." << endl;
}
else if (NowTime == 15) {
cout << "Lunch time!" << endl;
}
else if (NowTime < 18) {
cout << "Really hungry." << endl;
}
else if (NowTime == 18) {
cout << "Dinner time!" << endl;
}
else {
cout << "ZZZZZZZZ" << endl;
}
cout << result << endl;

return 0;
}
