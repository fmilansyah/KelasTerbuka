#include <iostream>

using namespace std;

int square(int x) {
	int y = x * x;
	return y;
}

int sumNum(int a, int b) {
	int c = a + b;
	return c;
}

int FunctionReturn() {
	int squareVal, squareRes, sum1Val, sum2Val, sumRes;
	
	cout << "Nilai Kuadrat Dari : ";
	cin >> squareVal;

	squareRes = square(squareVal);

	cout << squareRes << endl;

	cout << "Nilai Pertama Untuk Penjumlahan : ";
	cin >> sum1Val;
	cout << "Nilai Kedua Untuk Penjumlahan : ";
	cin >> sum2Val;

	sumRes = sumNum(sum1Val, sum2Val);

	cout << sumRes << endl;

	return 0;
}