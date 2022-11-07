#include <iostream>

using namespace std;

int DoWhile()
{
	int num1 = 1;

	do {
		cout << "To do ..." << endl;
		num1++;
	} while (num1 < 0);

	cout << "Selesai ..." << endl;
	return 0;
}