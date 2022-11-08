#include <iostream>

using namespace std;

int ForLoop()
{
	cout << "Loop 1" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}

	cout << "Loop 2" << endl;
	for (int i = 1; i <= 10; i += 2)
	{
		cout << i << endl;
	}

	cout << "Loop 3" << endl;
	for (int i = 1; i >= -10; i--)
	{
		cout << i << endl;
	}

	cout << "Loop 4" << endl;
	int num1 = 0;
	for (int i = 1; i <= 10; i++, num1 += i)
	{
		cout << i << " || " << num1 << endl;
	}

	return 0;
}