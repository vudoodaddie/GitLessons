#include <iostream>

using namespace std;

int MySquare(int x);

int main()
{
	cout << "Please enter a number to be squared: ";
	int x;
	cin >> x;
	
	int squared = MySquare(x);
	
	cout << x << " squared is " << squared << "." << endl;

	return 0;
}

int MySquare(int x)
{
	return x * x;
}
