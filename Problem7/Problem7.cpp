#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program that reads in a number and gives the shown output: 
	//Enter a number: 8 The number 8 is devisable the numbers 1, 2, 4, 8 Enter a number: 45 The number 45 is devisable the numbers 1, 3, 5, 9, 15, 45 

	int number;
	cout << "Enter the number: ";
	cin >> number;

	cout << endl << "The number " << number << " is divisible by: " << "\t";

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << "\t";
		}
	}
	cout << endl;

	return 0;
}