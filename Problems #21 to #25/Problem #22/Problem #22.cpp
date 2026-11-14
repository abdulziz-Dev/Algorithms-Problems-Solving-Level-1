// Write a program to calculate circle area Inscribed in an lsosceles Triangle, 
// Then Print it on the screen.

#include<iostream> 
#include<cmath>
using namespace std;

void ReadTriangleData(float& a, float& b)
{

	cout << "Please enter triangle side a?\n";
	cin >> a;

	cout << "Please enter triangle base b?\n";
	cin >> b;


}

float CircleAreaByITriangle(float a, float b)
{
	const float PI = 3.141592653589793238;

	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area Inscribed = " << Area << endl;
}

int main()
{
	float a, b;

	ReadTriangleData(a, b);
	PrintResult(CircleAreaByITriangle(a, b));

	return 0;
}