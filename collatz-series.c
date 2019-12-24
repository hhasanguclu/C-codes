#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <inttypes.h>

int main()
{

	unsigned long long uval;

	printf("Bir tamsayi girin: ");
	scanf("%I64u", &uval);

	while (1)
	{
		printf("%I64u ", uval);
		if (uval == 1)
		{
			break;
		}
		if (uval % 2 == 0)
		{
			uval /= 2;
		}
		else
		{
			uval = uval * 3 + 1;
		}
	}

	printf("\n");
}
