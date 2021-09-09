#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	float a,b,c,y;

	cout << "Enter 3 coefficients: " << endl;

	cin >> a >> b >> c;
	for(float x = -10; x <= 10; x = x + 1){
		y = a*(pow((x/10), 2)) + (b * (x/10)) + c;
		cout << "(" << x/10 << ", " << y << ")" << endl;
	}

	return 0;
}