#include <iostream>

using namespace std;

int ContinueBreak()
{
	cout << "Continue" << endl;
	int num1 = 0;
	while (num1 <= 10)
	{
		num1++;
		if (num1 == 5)
		{
			continue;
		}
		cout << num1 << endl;
	}
	cout << endl;

	cout << "Break" << endl;
	int num2 = 0;
	while (num2 <= 10)
	{
		num2++;
		if (num2 == 5)
		{
			break;
		}
		cout << num2 << endl;
	}

	return 0;
}