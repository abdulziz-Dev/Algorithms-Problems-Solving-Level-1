// Write a program to ask the user to enter Number1, Number2, Number3.
// Then print the *sum* of entered Numbers .

#include<iostream>
using namespace std;


void ReadNumbers(int &Num1, int &Num2, int &Num3)
{

	cout << "Please Enter Your  Number 1?\n";
	cin >> Num1;

	cout << "Please Enter Your Number 2?\n";
	cin >> Num2;

	cout << "Please Enter Your Number 3?\n";
	cin >> Num3;

}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return  Num1 + Num2 + Num3;
}

void PrintResults(int  sum)
{
	cout << "\n The total sum of numbers is: " << sum << endl;
}

int main()
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintResults(SumOf3Numbers(Num1, Num2, Num3));

	return 0;
}