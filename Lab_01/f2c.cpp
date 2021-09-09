#include <iostream>

using namespace std;
 
int main() {
	float fah,cel; 
	
	cout << "Enter temperature in Fahrenheit: ";
	cin >> fah;
	cel = (fah-32)*5/9; 
	cout << fah <<"° Fahrenheit is equal to "<< cel <<"° Celsius."<<endl;
	
	return 0;
}