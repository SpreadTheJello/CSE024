#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
 
int main() {
	float x1,y1,x2,y2,x3,y3,Px,Py,Px2,Py2,cross;

	cout << "Please enter each coordinate's value.\nEnter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2 (intersection): ";
	cin >> x2;
	cout << "Enter y2 (intersection): ";
	cin >> y2;
	cout << "Enter x3: ";
	cin >> x3;
	cout << "Enter y3: ";
	cin >> y3;

	Px = x2 - x1;
	Py = y2 - y1;
	x1 = 0;
	y1 = 0;
	Px2 = x3 - x2;
	Py2 = y3 - y2;

	cross = (Px2 * Py) - (Px * Py2);

	if(cross > 0){
		cout << "RIGHT" << endl;
	}
	if(cross < 0){
		cout << "LEFT" << endl;
	}
	if(cross == 0){
		cout << "STRAIGHT" << endl;
	}

	return 0;
}