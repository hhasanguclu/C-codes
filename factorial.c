#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)

{

	int result = 1;
	for (int i = 1; i <= n;++i)
	{
		result *= i;
	}
	return result;

}
int main() {

	for (int i = 0; i < 13; ++i)
	{
		printf("%2d! = %d\n", i, factorial(i));
	}

}
