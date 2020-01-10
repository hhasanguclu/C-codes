#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Asagida verilen seriyi hesaplayalim 
//(1/1)-(1/3) + (1/5) - (1/7) + (1/9)...


int factorial(int n)

{

	return n < 2 ? 1 : n * factorial(n - 1);

}
int main() 
{
	double sum = 0.;
	int n;
	printf("serinin kac terimi toplansin: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0) {
			sum += 1. / (2 * i + 1);
		}
		else {
			sum -= 1. / (2 * i + 1);
		}		
	}
	
	printf("pi = %f\n",4. * sum);
}
