#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	const static int a[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};
	return a[n];
}
int main() {
	int x;
	printf("bir tam sayi giriniz: ");
	scanf("%d", &x);
	printf("%d! = %d\n", x, factorial(x));
}
