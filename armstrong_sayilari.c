#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//armstrong sayilari (a*a*a) + (b*b*b) + (c*c*c)
int main() 
{

	int val = 100;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <=9; j++)
		{
			for (int k = 0; k <=9; k++)
			{
				if (val == (i*i*i) + (j*j*j) + (k*k*k))
				{
					printf("%d\n", val);
				}
				++val;
			}
			
		}
	}
}
