#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)

{

	return n < 2 ? 1 : n * factorial(n - 1);

}
int main() {

	for (int i = 0; i < 13; ++i)
	{
		printf("%2d! = %d\n", i, factorial(i));
	}

}
