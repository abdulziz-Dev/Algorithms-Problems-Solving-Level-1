#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(float &a, float &b)
{
	cout << "Please enter rectangle width a ?\n";
	cin >> a;

	cout << "Please enter rectangle length b ?\n";
	cin >> b;
}

float CaulculateRectangleArea(float a, float b)
{
	return a * b;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float a, b;

	ReadNumbers(a, b);
	PrintResult(CaulculateRectangleArea(a, b));

	return 0;
}