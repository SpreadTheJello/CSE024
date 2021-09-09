#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	float a,b,c,x1,x2,discriminant;

	cout << "Enter 3 coefficients (enter eof to stop): " << endl;

	while(cin >> a >> b >> c){
		discriminant = b * b - 4 * a * c;
		if (a == 0){
			cout << "\"a\" can not be 0.\n";
		}
		else if (discriminant < 0){
			cout << "Roots are not real.\n";
		}
		else{
			x1 = (-b + sqrt(discriminant)) / (2*a);
			x2 = (-b - sqrt(discriminant)) / (2*a);
			cout << "x1 = " << x1 << " and x2 = " << x2 << endl;
		}
	}

	return 0;
}