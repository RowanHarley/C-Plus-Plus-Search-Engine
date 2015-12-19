#include<string>
#include<string.h>
#include <iostream>

using namespace std;

int main() {
    	string search;
    	
    	// Only edit this code!
    	// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		string searchKeywordName[100][50] = { {"Test"}, {"std", "namespace"}, {"iostream", "include"} };
		string searchName[100] = {"Test", "The 'std' Namespace", "iostream"};
		string searchDesc[100] = {"This is a test", "This is the main namespace used in C++.\nIt contains many functions including cout, cin and many more!", "iostream is one of the main include directories in C++.\nIt contains many functions."};
		// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		// EDIT THE CODE BELOW AT YOUR OWN RISK!!!
		std::cout << "Welcome to this search engine! What would you like to search?" << endl;
		std::cin >> search;


		int breakInt = 0;
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
		/*for (int i = 0; i <= 100; i++) {
			if (search == searchName[i]) {
				std::cout << "Name: " << searchName[i] << endl << "Description: " << searchDesc[i] << endl;
				break;
			}
			else {
			  std::cout << "Nothing found in reference " << i << ". Trying in " << i + 1 << endl;
		}
	}*/
	system("Pause");
}
