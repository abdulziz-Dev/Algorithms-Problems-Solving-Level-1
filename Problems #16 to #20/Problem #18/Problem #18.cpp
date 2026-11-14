#include<iostream>
#include<cmath>
using namespace std;

float ReadRadious()
{
	float r;

	cout << "Please enter radious r ?\n";
	cin >> r;

	return r;
}

float CircleArea(float r)
{
	const float PI = 3.141592653589793238;

	float Area = pow(r, 2) * PI;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{

	PrintResult(CircleArea(ReadRadious()));

	return 0;
}
