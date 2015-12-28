#include<string>
#include<string.h>
#include <iostream>

using namespace std;

int main() {
	string search;
	
	// Only edit this code!
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	string searchKeywordName[100][50] = { {"Example"} };
	string searchName[100] = {"Example"};
	string searchDesc[100] = {"This is an Example"};
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// EDIT THE CODE BELOW AT YOUR OWN RISK!!!
	std::cout << "Welcome to this search engine! What would you like to search?" << endl;
	std::cin >> search;


	int breakInt = 0;
	// If changing the array size please change the for loops to suit you
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 50; j++) {

			if (_stricmp(search.c_str(), searchKeywordName[i][j].c_str()) == 0) {
				std::cout << "Name: " << searchName[i] << endl << "Description: " << searchDesc[i] << endl;
				breakInt = 1;
				break;
			}
			else {
				std::cout << "Nothing found in reference " << i << ", " << j << ". Trying in " << i + 1 << ", "<< j+1 <<  endl;
			}
		}
		if (breakInt == 1) {
			break;
		}
	}
	system("Pause");
}
