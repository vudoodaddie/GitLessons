#include <iostream>

using namespace std;

int MySquare(int x);

int main()
{
	cout << "Please enter a number to be squared: ";
	int x;
	cin >> x;
	
	int squared = MySquare(x);
	
	// This is the line that is being tested.
	cout << x << " squared is " << squared << "." << endl << endl;

	return 0;
}

//=========================================================================================================================================
// Returns the squared number from an integer input.
//=========================================================================================================================================
int MySquare(int x)
{
	return x * x;
}
