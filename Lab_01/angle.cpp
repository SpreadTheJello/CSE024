#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
 
int main() {
	float x1,y1,x2,y2,x3,y3,m1,m2;

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

	m1 = (y2 - y1)/(x2 - x1);
	m2 = (y3 - y2)/(x3 - x2);;

	float angle = atan(abs((m2 - m1) / (1 + m1 * m2)));
	angle = angle * 180/M_PI;
	cout << angle << "°"<< endl;

	return 0;
}