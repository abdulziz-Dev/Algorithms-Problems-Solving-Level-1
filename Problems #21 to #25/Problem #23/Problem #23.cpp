#include<iostream>
#include<cmath>

using namespace std;

void ReadTriangleData(float& a, float& b, float& c)
{
	cout << "Please enter Valeu a?\n";
	cin >> a;

	cout << "Please enter Valeu b?\n";
	cin >> b;

	cout << "Please enter Valeu c?\n";
	cin >> c;

}

float CircleAreaByTriangle(float a, float b, float c)
{
	const float PI = 3.141592653589793238;

	float P = (a + b + c) / 2;

	float T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));

	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float a, b, c;
	ReadTriangleData(a, b, c);
	PrintResult(CircleAreaByTriangle(a, b, c));

	return 0;
}