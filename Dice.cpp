#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char lanjut;
	while (true) {
		cout << "Lempar Dadu? (y/n) : ";
		cin >> lanjut;

		if (lanjut == 'y') {
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut == 'n') {
			break;
		}
		else {
			cout << "Harap ketik y untuk lanjut atau n untuk berhenti" << endl;
		}
	}
	return 0;
}