// lab13.2.cpp

#include <stdio.h>
#include <conio.h>
#include "lab13.2.h"

int main() {
	char ch;
	int x, y;
	do {
		puts("Input 2 integer numbers: ");
		INPUT("x: ", x);
		INPUT("y: ", y);
		int w = Calc(x, y);
		PRINT(w);
		puts("Continue? (y/n) ");
		ch = _getch();
	} while (ch != 'n');
	return 0;
}

int Calc(int x, int y) {
#if (Z > 3)
	return MAX(SQR(x + y), SQR(x - Z));
#else
	return MIN(x * y + y * Z, SQR(Z * x + y * Z));
#endif
}
