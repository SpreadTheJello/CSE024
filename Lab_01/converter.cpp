#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	int choice;
	
	cout << "Enter temperature in Fahrenheit:\n  1. Temperature\n  2. Distance\n  3. Weight\nEnter choice: ";
	cin >> choice;
	
	// TEMPERATURE
	if (choice == 1){
		int choice = 0;
		cout << "Enter conversion choice:\n  1. Celsius to Fahrenheit\n  2. Fahrenheit to Celsius\nEnter choice: ";
		cin >> choice;
		if (choice == 1){ // c2f
			float fah,cel; 
			cout << "Enter temperature in Celsius: ";
			cin >> cel;
			fah = (cel*9/5)+32; 
			cout << cel <<"° Celsius is equal to "<< fah <<"° Fahrenheit."<<endl;
		}
		else if (choice == 2){ // f2c
			float fah,cel;
			cout << "Enter temperature in Fahrenheit: ";
			cin >> fah;
			cel = (fah-32)*5/9; 
			cout << fah <<"° Fahrenheit is equal to "<< cel <<"° Celsius."<<endl;
		}
		else{
			cout << "Wrong input." <<endl;
		}
	}

	// DISTANCE
	else if (choice == 2){ 
		cout << "Enter conversion choice:\n  1. Feet to Meters\n  2. Meters to Feet\nEnter choice: ";
		cin >> choice;
		if (choice == 1){ // ft2m
			float feet,meters; 
			cout << "Enter distance in feet: ";
			cin >> feet;
			meters = feet/3.28084; 
			cout << feet <<" feet is equal to "<< meters <<" meters."<<endl;
		}
		else if (choice == 2){ // m2ft
			float feet,meters; 
			cout << "Enter distance in meters: ";
			cin >> meters;
			feet = meters * 3.28084; 
			cout << meters <<" meters is equal to "<< feet <<" feet."<<endl;
		}
		else{
			cout << "Wrong input." <<endl;
		}
	}

	// WEIGHT
	else if (choice == 3){ 
		cout << "Enter conversion choice:\n  1. Pounds to Kilograms\n  2. Kilograms to Pounds\nEnter choice: ";
		cin >> choice;
		if (choice == 1){ // lbs2kg
			float lbs,kg; 
			cout << "Enter weight in pounds: ";
			cin >> lbs;
			kg = lbs * 0.45359237;
			cout << lbs <<" pounds is equal to "<< kg <<" kilograms."<<endl;
		}
		else if (choice == 2){ // kg2lbs
			float lbs,kg; 
			cout << "Enter weight in kilograms: ";
			cin >> kg;
			lbs = kg * 2.20462; 
			cout << kg <<" kilograms is equal to "<< lbs <<" pounds."<<endl;
		}
		else{
			cout << "Wrong input." <<endl;
		}
	}

	else{
		cout << "Wrong input." <<endl;
	}
	return 0;
}