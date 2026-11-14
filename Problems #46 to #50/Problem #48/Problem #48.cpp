#include<iostream>
using namespace std;


float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float MonthlyInstallme(float LoanAmount, float HowManyMonths)
{
	return  (float) LoanAmount / HowManyMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float HowManyMonths = ReadPositiveNumber("How Many Months?");

	cout << "\nMonthly Installme = " << MonthlyInstallme(LoanAmount, HowManyMonths) << endl;
	cout << endl;

	return 0;
}