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

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1; //This Will Exit The Function And Return True.
		}
		else
		{
			cout << "\nWrong PIN\n";
			system("color 4F"); //Turn Screen to Red
		}

	} while (PinCode != "1234");

	return 0; //When you reach here this means login faild.
}

int main()
{
	if (Login())
	{
		system("color 2F"); //Turn Screen to Green
		cout << "\nYour account balance is: " << 7500 << '\n';
	}

	return 0;
}