// Copyright 2011 Tryple Helix Solutions, Inc.
// All Rights Reserved
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(void)
{
	// Print out the main text
	cout << "Hello World!" << endl;

	//This is a test comment

	// Give some space
	cout << endl << endl;
	
	// Guidance for quitting
	cout << "Press Enter to Continue...";
	cout.flush();
	cin.get();

	// Outta here!
	return 0;
}
