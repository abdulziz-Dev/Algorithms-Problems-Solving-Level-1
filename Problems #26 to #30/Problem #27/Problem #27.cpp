#include<iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number?" << endl;
	cin >> Number;

	return Number;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
	int Counter = N + 1;

	cout << "Range printed using While Statement:\n";

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	int Counter = N + 1;

	cout << "Range printed using Do..While Statement:\n";
	do
	{
		Counter--;
		cout << Counter << endl;
	} while (Counter > 1);
}

void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << "Range printed using For Statement:\n";

	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumber();

	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);

	return 0;
}