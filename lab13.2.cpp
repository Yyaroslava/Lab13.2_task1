#include "lab13.2.h"

void main() {
	char ch;
	int x, y, z;
	do {
		puts("Input 3 integer numbers: ");
		INPUT("x: ", x);
		INPUT("y: ", y);
		INPUT("z: ", z);
		int w = Calc(x, y, z);
		PRINT(w);
		puts("Continue? (y/n) ");
		ch = _getch();
	}
	while (ch != 'n');
}

int Calc(int x, int y, int z) {
	return TERN(z > 3, MAX(SQR(x + y), SQR(x - z)), MIN(x * y + y * z, SQR(z * x + y * z)));
}
