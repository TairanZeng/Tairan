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

