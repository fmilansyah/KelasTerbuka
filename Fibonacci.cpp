#include <iostream>

using namespace std;

int Fibonacci()
{
	int n, f_n, f_n1, f_n2;
	cout << "Program Deret Fibonacci" << endl;
	cout << "Masukan Nilai Ke-n : ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;
	cout << f_n2 << " ";
	cout << f_n1 << " ";

	for (int i = 1; i < n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}

	cout << endl;

	return 0;
}