#include<iostream>
using namespace std;

void ReadNumbers(int& NumA, int& NumB, int& NumC)
{
	cout << "Please enter NumA?\n";
	cin >> NumA;

	cout << "Please enter NumB?\n";
	cin >> NumB;

	cout << "Please enter NumC?\n";
	cin >> NumC;
}

int MaxOf3Numbers(int NumA, int NumB, int NumC)

{
	if (NumA > NumB && NumA > NumC)
		return NumA;
	else

	if (NumB > NumC)
		return NumB;
	else
		return NumC;
}

void PrintResult(int Max)
{
	cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
	int NumA, NumB, NumC;

	ReadNumbers(NumA, NumB, NumC);
	PrintResult(MaxOf3Numbers(NumA, NumB, NumC));

	return 0;
}