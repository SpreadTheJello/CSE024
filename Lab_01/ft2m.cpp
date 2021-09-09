#include <iostream>

using namespace std;
 
// there are 3.28084 feet in 1 meter
int main() {
	float feet,meters; 
	
	cout << "Enter distance in feet: ";
	cin >> feet;
	meters = feet/3.28084; 
	cout << feet <<" feet is equal to "<< meters <<" meters."<<endl;
	
	return 0;
}