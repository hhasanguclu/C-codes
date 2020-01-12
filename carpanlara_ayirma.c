#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
CARPANLARA AYIRMA
*/
int main() 
{
	int x;
	printf("bir tam sayi giriniz:  ");
	scanf("%d", &x);
	int i = 2;
	while (x != 1) {
		while (x % i == 0) {

			printf("%d ", i);
			x /= i;
		}

		++i;
	}

	return 0;
}
