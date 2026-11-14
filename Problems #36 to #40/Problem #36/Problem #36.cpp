#include<iostream>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', 
	                   Multiply = '*', Divide = '/'
};
                                  
	
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter Operation Type ( +, -, *, / )?\n";
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate(int Number1, int Number2, enOperationType OpTyep)
{
	switch (OpTyep)
	{

	case enOperationType::Add:
		return Number1 + Number2;

	case enOperationType::Subtract:
		return Number1 - Number2;

		case enOperationType::Multiply:
		return Number1 * Number2;

		case enOperationType::Divide:
		return Number1 / Number2;

	default:
		return Number1 + Number2;
	}

}

int main()
{
	float Number1 = ReadNumber("Please neter thr first number?");
	float Number2 = ReadNumber("Please enter the second number?");

	enOperationType OpTyep = ReadOpType();

	
	cout << endl << "Result = " << Calculate(Number1, Number2, OpTyep) << endl;

	return 0;
}