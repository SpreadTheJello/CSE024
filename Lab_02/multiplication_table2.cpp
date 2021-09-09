#include <iostream>

using namespace std;
 
int main() {
	int num;

	cout << "Enter integers with space in between, or until \"eof\" is entered: ";
	while (cin >> num) {
		for (int i = 1; i <= 12; i++){
			cout << num << " x " << i << " = " << num * i << "\n";
		}
		cout << "\n";
	}

	return 0;
}