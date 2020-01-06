#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main() {

	printf("iki karakter girin: ");
	int c1 = getchar();
	int c2 = getchar();

	if (toupper(c1) == toupper(c2))
	{
		printf("(%c) ve (%c) ayni karakterler\n", c1, c2);
	}

	else
		printf("(% c) ve(% c) farkli karakterler\n", c1, c2);
}
