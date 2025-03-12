#include <iostream>
using namespace std;

int main() {
	// below are variables declaration 
	double InputOne;
	double InputTwo;
	string Operator;
	// below are character input
	cout << "Enter a number (For example 1 )    ";
	cin >> InputOne;
	cout << "Enter a opperator (For example + - * / )    ";
	cin >> Operator;
	cout << "Enter another number (For example 5 )    ";
	cin >> InputTwo;
	// below are "if" statements
	if (Operator == "+") {
		cout << "The answer is " << InputOne + InputTwo << ".";
	}
	if (Operator == "-") {
		cout << "The answer is " << InputOne - InputTwo << ".";
	}
	if (Operator == "*") {
		cout << "The answer is " << InputOne * InputTwo << ".";
	}
	if (Operator == "/") {
		cout << "The answer is " << InputOne / InputTwo << ".";
	}
	return 0;
}
