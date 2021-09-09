#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
	int length,star,i,j;

	cout << "Enter an integer that represents the side length of the diamond: " << endl;
	cin >> length;

	for(int i = 1; i <= length; i++){
		for(j = 1; j <= length - i; j++){
			cout << "  ";
		}
		while (star != ((2 * i) - 1)){
			if (star == 0 || star == 2 * i - 2){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
			star++;
		}
		star = 0;
		cout << "\n";
	}
	length--;
	for (i = length; i >= 1; i--){
		for (j = 0; j <= length - i; j++){
			cout << "  ";
		}
		star = 0;
		while (star != (2 * i - 1)) {
			if (star == 0 || star == 2 * i - 2){
				cout << "* " ;
			}
			else{
				cout << "  ";
			}
			star++;
		}
		cout << "\n";
	}

	return 0;
}