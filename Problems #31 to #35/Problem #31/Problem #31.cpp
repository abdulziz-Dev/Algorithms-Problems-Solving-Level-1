#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int Num;

	cout << "Please enter a Number ?\n";
	cin >> Num;

	return Num;
}

int CalculateNumber(int Num, int Pow)
{

	return pow(Num, Pow);
}

void PrintResult(int Powr)
{
	cout << CalculateNumber(Powr, 2) << endl;
	cout << CalculateNumber(Powr, 3) << endl;
	cout << CalculateNumber(Powr, 4) << endl;
}

int main()
{
	int Num = ReadNumber();
	PrintResult(Num);

	return 0;
}