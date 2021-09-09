#include <iostream>
#include "lab3.h"

using namespace std;

int main(){
	string str;
	string str2;
	// String Regrouping
	str = "H2SO4"; // Should return "HSO24"
	cout << regroup(str) << endl;

	// Count Upper Case Letters
	str = "Hello World"; // Should return 2
	cout << count_upper(str) << endl;

	// Invert String Case
	str = "Earth"; // Should return "EaRTH"
	cout << transform_case(str) << endl;

	// String Rotations
	str = "ABCD";
	str2 = "BCDA"; // Should return 1
	cout << rotation_distance(str, str2) << endl;

	// String Compression
	str = "AAACTGG"; // Should return "A3CTG2"
	cout << compress(str) << endl;

	// Refelctional Symmetry of Strings
	str = "JOL"; //Should return true
	cout << symmetric(str) << endl;
}