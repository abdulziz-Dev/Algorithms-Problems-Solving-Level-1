#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(float& a, float& h)
{
	cout << "Please enter Triangle base a ?\n";
	cin >> a;

	cout << "Please enter Triangle height h ?\n";
	cin >> h;
}

float TriangleArea(float a, float h)
{
	float Area = (a / 2) * h;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nTriangle Area = " << Area << endl;
}

int main()
{
	float a, h;

	ReadNumbers(a, h);
	PrintResult(TriangleArea(a, h));

	return 0;
}
