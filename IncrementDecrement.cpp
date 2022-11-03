#include <iostream>

using namespace std;

int IncrementDecrement()
{
	// increment += 1, decrement -= 1
	int preInc = 5, postInc = 5, preDec = 5, postDec = 5;

	// preincrement (ditambah 1 terlebih dahulu)
	cout << preInc << endl;
	cout << ++preInc << endl;
	cout << preInc << endl << endl;

	// postincrement (di print terlebih dahulu)
	cout << postInc << endl;
	cout << postInc++ << endl;
	cout << postInc << endl << endl;

	// predecrement (dikurang 1 terlebih dahulu)
	cout << preDec << endl;
	cout << --preDec << endl;
	cout << preDec << endl << endl;

	// postdecrement (di print terlebih dahulu)
	cout << postDec << endl;
	cout << postDec-- << endl;
	cout << postDec << endl << endl;

	return 0;
}