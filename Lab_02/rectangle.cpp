#include <iostream>

using namespace std;

int main() {
	int width;
	int height;

	cout << "Enter a positive, nonezero integer for the width: ";
	cin >> width;
	cout << "Enter a positive, nonezero integer for the height: ";
	cin >> height;
	for(int w = 0; w < height; w++){
		for(int h = 0; h < width; h++){	
			if (w == 0 || w == height - 1){
				if(h == width - 1){
					cout << "*\n";
				}
				else{
					cout << "* ";
				}
			}
			else{
				if(h == width - 1){
					cout << "*\n";
				}
				else{
					if(h == 0){
						cout << "* ";
					}
					else{
						cout << "  ";
					}
				}
			}
		}	
	}

	return 0;
}