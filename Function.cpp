#include <iostream>
#include <cmath>

using namespace std;

int FunctionIntro() {
	int x;

	cout << "Menghitung akar dari x : ";
	cin >> x;

	double y = sqrt(x);
	cout << "Akarnya adalah " << y << endl;

	return 0;
}