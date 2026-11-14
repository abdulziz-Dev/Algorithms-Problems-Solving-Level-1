#include <iostream>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do 
	{
		
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;

}

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter a day number [1 to 7]", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{

	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "SaturDay";

	case enDayOfWeek::Sun:
		return "SunDay";
			
	case enDayOfWeek::Mon:
			return "Monday";

	case enDayOfWeek::Tue:
			return "TuesDay";

	case enDayOfWeek::Wed:
			return "WednesDay";
			
	case enDayOfWeek::Thu:
			return "ThursDay";
		
	case enDayOfWeek::Fri:
			return "FriDay";

	default:
		return "Not a valid Day";

	}

}


int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}