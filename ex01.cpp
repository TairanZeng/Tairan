========= practice 1   ==================================

#include <iostream>
using namespace std;

int main() {
int TairanWeight = 10;
int FoodWeight = 1;
int LunchWeight = 2;
int DinnerWeight = 3;

int TotalWeight = TairanWeight + FoodWeight;
int NowWeight = TotalWeight + LunchWeight;

string MyName = "Tairan Zeng";
string AnimalType = "cat";

cout << "Good morning! I am " << MyName << " the " << AnimalType << "!" << endl;
cout << "My net weight is " << TairanWeight << " kilograms." << endl;
cout << "My breakfast weight is " << FoodWeight << " kilograms." << endl;
cout << "My total weight after I eat breakfast is " << TotalWeight << " kilograms." << endl;
cout << "For lunch I ate..." << endl;
cout << "2 kilos of " << AnimalType << " food" << endl;
cout << "My weight after lunch is " << TotalWeight + LunchWeight << " kilograms." << endl;
cout << "My dinner weight is " << DinnerWeight << " kilograms." << endl;
cout << "My weight at the end of the day is " << NowWeight + DinnerWeight << " kilograms." << endl;

}


========= practice 2   ==================================

#include <iostream>
using namespace std;

int main() {

int DaddyCash = 10;
int TairanCash = 10;

if (DaddyCash > TairanCash) {
cout << "Daddy is richer." << endl;
}
else if (DaddyCash < TairanCash)
{
cout << "Tairan is richer." << endl;
}
else
{
cout << "They are equally rich." << endl;
} return 0;

}


========= practice 3   ==================================


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
