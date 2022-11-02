#include <iostream>

using namespace std;

int Kalkulator()
{
	float num1, num2, result = 0;
	char operation;

	cout << "Kalkulator" << endl << endl;

	// Input num1
	cout << "Masukan nilai pertama : ";
	cin >> num1;

	// Input operation
	cout << "Operasi +, -, *, / : ";
	cin >> operation;

	// Input num2
	cout << "Masukan nilai kedua : ";
	cin >> num2;

	if (operation == '+')
	{
		result = num1 + num2;
	}
	else if (operation == '-')
	{
		result = num1 - num2;
	}
	else if (operation == '*')
	{
		result = num1 * num2;
	}
	else if (operation == '/')
	{
		result = num1 / num2;
	}
	else
	{
		cout << "Operasi Tidak Valid!" << endl;
		return 0;
	}

	cout << "Hasil : ";
	cout << num1 << operation << num2;
	cout << " = " << result << endl;

	return 0;
}