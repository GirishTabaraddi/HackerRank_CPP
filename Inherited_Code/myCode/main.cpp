// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "BadLengthException.h"

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
	cout << "HackerRank - Medium - Inherited_Code started." << endl << endl;

	int noOfInputs;

	cin >> noOfInputs;

	while(noOfInputs--)
	{
		string username;

		BadLengthException obj(0);

		cin >> username;

		try
		{
			bool isValid = obj.CheckUserName(username);

			if(isValid)
			{
				cout << "Valid" << endl;
			}
			else
			{
				cout << "Invalid" << endl;
			}
		}
		catch(BadLengthException &e)
		{
			cout << "Too short: " << e.what() << endl;
		}
	}

	return 0;
}
