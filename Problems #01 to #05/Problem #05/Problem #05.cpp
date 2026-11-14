#include<iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDriverLicenes;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Do you have a Recommendation?\n";
	cin >> Info.HasRecommendation;

	cout << "Please Enter Your Age?\n";
	cin >> Info.Age;

	cout << "Do you have driver Licenes?\n";
	cin >> Info.HasDriverLicenes;

	
	
	return Info;

}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return(Info.Age > 21 && Info.HasDriverLicenes);
	}
	
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "Hired\n";
	else
		cout << "Rejected\n";
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}