#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isprime(int val)
{
	if (val<2)
	{
		return 0;
	}

	if (val % 2== 0)
	{
		return val == 2;
	}

	if (val % 3 ==0)
	{
		return val == 3;
	}

	if (val % 5 == 0)
	{
		return val == 5;
	}

	for (int i = 7; i*i <=val; i+=2)
	{
		if (val % i ==0)
		{
			return 0;
		}
	}

	return 1;

}

int main() 
{
	for (int i = 1987123000;  i < 1987125000; ++i)
	{
		if (isprime(i))
		{
			printf("%d ", i);
		}
	}
}
