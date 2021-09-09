#include <iostream>

using namespace std;

string monthToString(int month){
	if(month == 1){
		return "January";
	}
	else if(month == 2){
		return "February";
	}
	else if(month == 3){
		return "March";
	}
	else if(month == 4){
		return "April";
	}
	else if(month == 5){
		return "May";
	}
	else if(month == 6){
		return "June";
	}
	else if(month == 7){
		return "July";
	}
	else if(month == 8){
		return "August";
	}
	else if(month == 9){
		return "September";
	}
	else if(month == 10){
		return "October";
	}
	else if(month == 11){
		return "November";
	}
	else{
		return "December";
	}
}

int daysInMonth(int month, bool leapYear){
	if(month == 1){
		return 31;
	}
	else if(month == 2){
		if(leapYear){
			return 29;
		}
		else{
			return 28;
		}
	}
	else if(month == 3){
		return 31;
	}
	else if(month == 4){
		return 30;
	}
	else if(month == 5){
		return 31;
	}
	else if(month == 6){
		return 30;
	}
	else if(month == 7){
		return 31;
	}
	else if(month == 8){
		return 31;
	}
	else if(month == 9){
		return 30;
	}
	else if(month == 10){
		return 31;
	}
	else if(month == 11){
		return 30;
	}
	else if(month == 12){
		return 31;
	}
	else{
		return 0;
	}
}

bool isLeapYear(int year){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return true;
	}
	else{
		return false;
	}
}

int daysToJan(int month, int year){
	int d = 0;
	
	for (int i = 0; i < (year - 2000); i++){
		int currentYear = 2000 + i;
		if(currentYear % 400 == 0 || (currentYear % 4 == 0 && currentYear % 100 != 0)){
			d += 366;
		}
		else{
			d += 365;
		}
	}

	bool isSelectedYearLeap = isLeapYear(year);
	for (int i = 0; i < month; i++){
		d = d + daysInMonth(i, isSelectedYearLeap);
	}
	return d;
}

void addSpaces(int numberOfSpaces){
	for (int i = 0; i < numberOfSpaces; i++){
		cout << " ";
	}
}

int main() {
	int month, year;

	cout << "Please enter month and year, ex: \"1 2020\": ";
	cin >> month >> year;

	int d = daysToJan(month, year);
	int weekdayStart = d % 7;
	bool isSelectedYearLeap = isLeapYear(year);

	cout << monthToString(month) << " " << year << "\n\n";
	cout << " S   M   T   W   T   F   S\n";
	cout << "--------------------------\n";

	if (weekdayStart == 0){
		addSpaces(18);
	}
	else{
		addSpaces(4 * weekdayStart - 4);
	}

	for (int i = 1; i < daysInMonth(month, isSelectedYearLeap) + 1; i++){
		if(month == 2 && i == 1 && year == 2020){
			cout << "      " << i;
		}
		else{
			cout << i;
		}
		if (i >= 10){
			cout << "  ";
		}
		else{
			cout << "   ";
		}
		if((d + i - 1) % 7 == 0){
			cout << "\n";
		}
	}

	return 0;
}