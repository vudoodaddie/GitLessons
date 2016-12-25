#include <iostream>

using namespace std;

int MySquare(int z);

int main()
{
	cout << "Please enter a number to be squared: ";
	int z;
	cin >> z;
	
	int squared = MySquare(z);
	
	// This is the line that is being tested.
	cout << z << " squared is " << squared << "." << endl << endl;

	return 0;
}

//=========================================================================================================================================
// Returns the squared number from an integer input.
//=========================================================================================================================================
int MySquare(int z)
{
	return z * z;
}
