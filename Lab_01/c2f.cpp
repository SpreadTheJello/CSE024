#include <iostream>

using namespace std;
 
int main() {
	float fah,cel; 
	
	cout << "Enter temperature in Celsius: ";
	cin >> cel;
	fah = (cel*9/5)+32; 
	cout << cel <<"° Celsius is equal to "<< fah <<"° Fahrenheit."<<endl;
	
	return 0;
}