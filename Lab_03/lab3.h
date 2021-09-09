#ifndef LAB_3_H
#define LAB_3_H

#include <string>
#include <ctype.h>
#include <algorithm>
#include <array>

// String Regrouping
std::string regroup (std::string s){
	std::string nums = "";
	std::string alpha = "";

	for(int i = 0; i < s.size(); i++){
		if(s[i] <= '9' && s[i] >= '0'){
			nums += s[i];
		}
		else{
			alpha += s[i];
		}
	}

	return alpha + nums;
}

// Count Upper Case Letters
int count_upper(std::string s){
	int count = 0;

	for(int i = 0; i <= s.size(); i++){
		if(isupper(s[i])){
			count++;
		}
	}

	return count;
}

// Invert String Case
std::string transform_case(std::string s){
	for(int i = 0; i <= s.size(); i++){
		if(s[i] == 'a' || s[i] == 'A'){
			s = s;
		}
		else if(s[i] == 'E'){
			s[i] = toupper(s[i]);
		}
		else if(islower(s[i]) || s[i] == 'e' || s[i] == 'E'){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}
	return s;
}

// String Rotations
int rotation_distance(std::string a, std::string b){
	int distance = 0;
	if(a == b){
		return distance;
	}
	for(int i = 1; i < a.size(); i++){
		std::rotate(a.begin(), a.begin() + 1, a.end());
		if(a == b){
			if((a.size() - (distance + i)) < (distance + i)){
				return a.size() - (distance + i);
			}
			else{
				return distance + i;
			}
		}
	}
	return distance - 1;
}

// String Compression
std::string compress(std::string s){
	std::string s2 = "";
	char prevChar = s[0];
	int count = 1;

	for(int i = 1; i < s.length(); i++){
		if(s[i] == prevChar){
			count++;
		}
		else{
			if(count != 1){s2 += prevChar + std::to_string(count);}
			else{s2 += prevChar;}
			prevChar = s[i];
			count = 1;
		}
	}
	if(count != 1){s2 += prevChar + std::to_string(count);}
	else{s2 += prevChar;}
	return s2;
}


//Reflectional Symmetry of Strings
bool symmetric(std::string s){
	char symmetricLetters[] = {'A','H','I','O','U','M','T','V','W','X','Y','8','0'};
	std::pair<char, char> symmetricPairs[] = {{'P','9'},{'E','3'},{'2','S'},{'L','J'},{'A','A'},{'8','8'},{'0','0'},{'0','O'},{'W','W'},{'T','T'},{'Y','Y'},{'U','U'},{'I','I'},{'O','O'},{'H','H'},{'X','X'},{'V','V'},{'M','M'}};
	bool failed = false;
	bool pairFound;
	bool middleSymmetric;
	char firstLetter;
	char lastLetter;
	char pair1;
	char pair2;
	//int lengthOfArray = sizeof(symmetricPairs)/sizeof(char); 
	//int lengthOfLetters = sizeof(symmetricLetters)/sizeof(char); 

	if(s.size() % 2 == 0){
		for(int i = 0; i < s.size()/2; i++){
			if(failed == false){
				pairFound = false;
				for(int j = 0; j < 18; j++){
					firstLetter = s[i];
					lastLetter = s[s.size() - 1 - i];
					pair1 = symmetricPairs[j].first;
					pair2 = symmetricPairs[j].second;

					if((firstLetter == pair1 && lastLetter == pair2) || (lastLetter == pair1 && firstLetter == pair2)){
						pairFound = true;
						break;
					}
				}
				if(pairFound == false){
					failed = true;
					break;
				}
			}
		}
	}
	else{
		for(int i = 0; i < s.size()/2; i++){
			if(failed == false){
				pairFound = false;
				for(int j = 0; j < 18; j++){
					firstLetter = s[i];
					lastLetter = s[s.size() - 1 - i];
					pair1 = symmetricPairs[j].first;
					pair2 = symmetricPairs[j].second;

					if((firstLetter == pair1 && lastLetter == pair2) || (lastLetter == pair1 && firstLetter == pair2)){
						pairFound = true;
						break;
					}
				}
				if(pairFound == false){
					failed = true;
					break;
				}
			}
		}
		middleSymmetric = false;
		for(int i = 0; i < 13; i++){
			if (s[div(s.size(), 2).quot] == symmetricLetters[i])
			{
				middleSymmetric = true;
				break;
			}
		}
		if (middleSymmetric == false){
			failed = true;
		}
	}
	if(failed == true){
		return false;
	}
	else{
		return true;
	}
}

#endif