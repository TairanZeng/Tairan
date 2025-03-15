#include <iostream> 
using namespace std;

int main() {
	int YwNum;
	cout << "TN: Knock Knock!" << endl;
	cout << "YW: Who's There?" << endl;
	cout << "TN: ... (Pick a number from 1 to 3 as TN's response)     " << endl;
	cin >> YwNum;
	switch (YwNum) {
	case 1:
		cout << "TN: Underpants" << endl;
		cout << "YW: Underpants Who?" << endl;
		cout << "TN: My underpants so you better pay for them." << endl;
		break;
	case 2:
		cout << "TN: Teacher" << endl;
		cout << "YW: Teacher Who?" << endl;
		cout << "TN: A angry teacher so DO YOUR HOMEWORK OR ELSE!!!" << endl;
		break;

	case 3:
		cout << "TN: Doughnut" << endl;
		cout << "YW: Doughnut Who?" << endl;
		cout << "TN: Oh that reminds me that I have doughnuts for lunch!" << endl;
		break;
        default:
		cout << "Please choose again." << endl;
	}
	return 0;
}

