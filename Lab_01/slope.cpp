#include <iostream>

using namespace std;
 
int main() {
	float x1,x2,y1,y2,grad; 
	
	cout << "Enter first x: ";
	cin >> x1;
	cout << "Enter first y: ";
	cin >> y1;
	cout << "Enter second x: ";
	cin >> x2;
	cout << "Enter second y: ";
	cin >> y2;
	grad = (y2-y1)/(x2-x1);

	if(x2-x1 == 0){
		cout << "Can't divide by 0" << endl;
	}
	else {
		cout << "The gradient of ("<< x1 <<", "<< y1 << "), ("<< x2 << ", " << y2 << ") is "<< grad << endl;
	}

	return 0;
}