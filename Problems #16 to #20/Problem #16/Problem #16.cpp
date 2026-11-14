#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(float& a, float& d)
{
	cout << "Please enter rectangle side a ?\n";
	cin >> a;

	cout << "Please enter rectangle diagonal d ?\n";
	cin >> d;
}

float RectangleAreaBySideAndDiagonal(float a, float d)
{
	float Area = a * sqrt(pow(d, 2) - pow(a, 2));
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float a, d;

	ReadNumbers(a, d);
	PrintResult(RectangleAreaBySideAndDiagonal(a, d));

	return 0;
}
