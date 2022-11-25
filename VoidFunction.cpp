#include <iostream>

using namespace std;

int kuadrat(int x) {
	int y = x * x;
	return y;
}

void tampilkan(int input) {
	cout << "Menampilkan dengan void" << endl;
	cout << input << endl;
}

int VoidFunction() {
	int input, hasil;
	cout << "Nilai Kuadrat : ";
	cin >> input;

	hasil = kuadrat(input);
	tampilkan(hasil);

	return 0;
}