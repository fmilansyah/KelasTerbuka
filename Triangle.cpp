#include <iostream>

using namespace std;

int Triangle()
{
	int n;
	
	cout << "Masukan Panjang Pola : ";
	cin >> n;

	cout << "Pola 1" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 2" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 3" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = n; k >= i; k--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 4" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 5" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 6" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = n; k >= (2*i-n); k--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 7" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = n; k >= (2 * i - n); k--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}