#include <iostream>

using namespace std;

int MySquare(int z);
int MyCube(int x);

int main()
{
	cout << "Please enter a number to be squared: ";
	int z;
	cin >> z;
	
	int squared = MySquare(z);
	
	// This is the line that is being tested.
	cout << z << " squared is " << squared << "." << endl;
	
	int cubed = MyCube(z);
	
	cout << z << " cubed is " << cubed << "." << endl;

	return 0;
}

//=========================================================================================================================================
// Returns the cubed number from an integer input.
//=========================================================================================================================================
int MyCube(int x)
{
	// For the purposes of testing a git pull.
	return x * x * x;
}

//=========================================================================================================================================
// Returns the squared number from an integer input.
//=========================================================================================================================================
int MySquare(int z)
{
	return z * z;
}
