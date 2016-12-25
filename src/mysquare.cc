#include <iostream>

using namespace std;

int MySquare(int y);

int main()
{
	cout << "Please enter a number to be squared: ";
	int y;
	cin >> y;
	
	int squared = MySquare(y);
	
	// This is the line that is being tested.
	cout << y << " squared is " << squared << "." << endl << endl;

	return 0;
}

//=========================================================================================================================================
// Returns the squared number from an integer input.
//=========================================================================================================================================
int MySquare(int y)
{
	return y * y;
}
