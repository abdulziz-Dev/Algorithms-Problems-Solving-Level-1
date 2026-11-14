#include<iostream>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please Enter PIN code?\n";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;
	int Counter = 3;

	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1; //This Will Exit The Function And Return True.
		}
		else
		{
			system("color 4F"); //Turn Screen to Red
			cout << "\nWrong PIN, you have " << Counter << " more tries\n";
		}

	} while (Counter >= 1 && PinCode != "1234");

	return 0; //When you reach here this means login faild.
}

int main()
{
	if (Login())
	{
		system("color 2F"); //Turn Screen to Green
		cout << "\nYour account balance is: " << 7500 << '\n';
	}
	else
	{
		cout << "\nYour card blocked call the bank for help. \n";
	}

	return 0;
}