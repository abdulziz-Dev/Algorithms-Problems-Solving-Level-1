#include<iostream>
using namespace std;


void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Num1 ?\n";
	cin >> Num1;

	cout << "Please enter Num2 ?\n";
	cin >> Num2;
}

void SwopOf2Numbers(int &Num1, int &Num2)
{
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

}

void PrintNumbers(int Num1, int Num2)
{
	cout << "\nNumber 1 = " << Num1 << endl;
	cout << "Number 2 = " << Num2 << endl;
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	SwopOf2Numbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	
	

	return 0;
}