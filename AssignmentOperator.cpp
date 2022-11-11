#include <iostream>

using namespace std;

int AssignmentOperator() {
	int x = 10;

	cout << "Nilai awal x = " << x << endl;

	x += 5;
	cout << "Ditambah 5 = " << x << endl;

	x -= 6;
	cout << "Dikurang 6 = " << x << endl;

	x /= 3;
	cout << "Dibagi 3 = " << x << endl;

	x *= 2;
	cout << "Dikali 2 = " << x << endl;

	x %= 4;
	cout << "Dimodulus 5 = " << x << endl;

	return 0;
}
