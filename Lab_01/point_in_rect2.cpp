#include <iostream>
#include <cmath>

using namespace std;
 
int main() {

	float x,y,x1,y1,x2,y2,x3,y3,x4,y4;

	cout << "Enter bottom left x coordinate: ";
	cin >> x1;
	cout << "Enter bottom left y coordinate: ";
	cin >> y1;
	cout << "Enter top right x coordinate: ";
	cin >> x3;
	cout << "Enter top right y coordinate: ";
	cin >> y3;
	cout << "Now please enter the x value of the red point: ";
	cin >> x;
	cout << "Now please enter the y value of the red point: ";
	cin >> y;

	if(x >= x1 && x <= x3 && y >= y1 && y<= y3){
		cout << "Your redpoint: (" << x << ", " << y << ") lies within the rectangle coordinates you entered." << endl;
	}
	else{
		cout << "Your redpoint: (" << x << ", " << y << ") is not within the rectangle coordinates you entered." << endl;
	}

	return 0;
}