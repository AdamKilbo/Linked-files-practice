#include <iostream>
#include "add.h"
#include "subtract.h"
using namespace std;

int main()
{
	cout << "Hello, welcome to the adder/subtractor." << endl;
	cout << "If you would like to add two numbers, enter '1'. Otherwise, enter '2'" << endl;
	int input = 0; 
	while (input != 1 || 2) //loop to ensure a valid input
	{
		cin >> input; // get user input. 

		if (input == 1) //if true, user specified to add.
		{
			add();
			break;
		}

		else if (input == 2) //if true, user specified to subtract
		{
			subtract();
			break;
		}

		else
		{
			cout << "input not recognized, please enter '1' for adding or '2' for subtracting" << endl;
		}
	}

	return 0;
}