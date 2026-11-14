/*
Write a program to calculate N^M.
*/

#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a Number ?\n";
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Number;

	cout << "Please enter the power? " << endl;
	cin >> Number;

	return Number;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		// Any number powered to zero gives 1
		return 1;
	}

	int P = 1;

	for (int i = 1;i <= M;i++)
	{
		P = P * Number;
	}

	return P;
}

int main()
{

	cout << PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;
}