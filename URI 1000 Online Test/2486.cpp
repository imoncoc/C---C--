// C++ program to demonstrate array of strings using
// array of strings.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// Initialize String Array
	std::string colour[4][20];
	for (int i = 0; i < 4; i++){

		//cin>> colour[i];
		cin.sync();
        getline(cin, colour[i]);
	}

	// Print Strings
	for (int i = 0; i < 4; i++)
		cout << colour[i] << "\n";
}
