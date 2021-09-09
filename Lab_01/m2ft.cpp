#include <iostream>

using namespace std;
 
// there are 3.28084 feet in 1 meter
int main() {
	float feet,meters; 
	
	cout << "Enter distance in meters: ";
	cin >> meters;
	feet = meters * 3.28084; 
	cout << meters <<" meters is equal to "<< feet <<" feet."<<endl;
	
	return 0;
}