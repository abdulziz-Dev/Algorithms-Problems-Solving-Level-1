#include<iostream>
using namespace std;

int ReadTotalsales()
{
	int Totalsales;

	cout << "Please enter a Total Sales ?\n";
	cin >> Totalsales;

	return Totalsales;
}

float GetCommissionPercentage(float Totalsales)
{

	if (Totalsales >= 1000000)
		return 0.01;
	else if (Totalsales >= 500000)
		return 0.02;
	else if (Totalsales >= 100000)
		return 0.03;
	else if (Totalsales >= 50000)
		return 0.05;
	else 
		return 0;

}

float CalculateTotalCommission(float Totalsales)
{
	return GetCommissionPercentage(Totalsales) * Totalsales;
}

int main()
{
	float Totalsales = ReadTotalsales();

	cout << "\nComission Percentage = " << GetCommissionPercentage(Totalsales) << endl;
	cout << "\nTotal Comission = " << CalculateTotalCommission(Totalsales) << endl;

	return 0;

}
