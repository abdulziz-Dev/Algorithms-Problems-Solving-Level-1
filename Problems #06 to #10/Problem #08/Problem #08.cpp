#include<iostream>
#include<string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
	int Mark = 0;

	cout << "Please enter a Mark ?\n";
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Faild";
}

int main()
{

	PrintResults(ReadMark());

	return 0;
}