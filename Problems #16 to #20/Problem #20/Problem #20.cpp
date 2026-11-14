#include<iostream>
#include<cmath>
using namespace std;

float ReadSquareSide()
{
	float A;

	cout << "Please enter radious r ?\n";
	cin >> A;

	return A;
}

float CircleAreaInscridedInSquare(float A)
{
	const float PI = 3.141592653589793238;

	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{

	PrintResult(CircleAreaInscridedInSquare(ReadSquareSide()));

	return 0;
}