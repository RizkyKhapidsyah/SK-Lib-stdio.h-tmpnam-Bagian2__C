#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main(void) {
	char generate[L_tmpnam + 1]; // Add +1 for the null character.
	tmpnam(generate);
	puts(generate);

	_getch();
	return 0;
}
