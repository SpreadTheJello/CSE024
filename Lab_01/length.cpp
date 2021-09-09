#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	float x1,x2,y1,y2,num,num2,length; 
	
	cout << "Enter first x: ";
	cin >> x1;
	cout << "Enter first y: ";
	cin >> y1;
	cout << "Enter second x: ";
	cin >> x2;
	cout << "Enter second y: ";
	cin >> y2;

	num = (y2-y1);
	num2 = (x2-x1);
	length = sqrt(pow(num, 2) + pow(num2, 2));

	cout << "The length of the line segment of ("<< x1 <<", "<< y1 << "), ("<< x2 << ", " << y2 << ") is "<< length << endl;

	return 0;
}