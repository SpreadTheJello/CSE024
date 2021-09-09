#include <iostream>

using namespace std;
 
int main() {
	int num;
	int count = 1;

	cout << "Enter an integer: ";
	cin >> num;

	while(count < 13){
		cout << num << " x " << count << " = " << num * count << "\n";
		count = count + 1;
	}

	return 0;
}