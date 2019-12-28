#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//mersenne asalı ----> mükemmel sayı
// her mersenne asalı bir mükemmel sayıya karşılık gelir.
int isperfect(int val) {

	int sum_divisors = 0;

	for (int i = 1; i <= val / 2; ++i)
	{
		if (val % i == 0)
		{
			sum_divisors += i;
		}
	}

	return sum_divisors == val;

}

int main() {

	for (int i = 2; i < 10000; ++i)
	{
		if (isperfect(i))
		{
			printf("%d mukemmel bir sayidir!\n", i);
		}
	}

}



