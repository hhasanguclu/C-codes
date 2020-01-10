#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//***Taylor serisi hesaplama*** 
//sigma(1, infinity) 1/n! 
//bu serinin e sayisina yakinsadigi bilinir

int factorial(int n)

{

	return n < 2 ? 1 : n * factorial(n - 1);

}
int main() 
{
	double sum = 0.;
	
	for (int i = 0; i < 13; ++i)
	{
		sum += 1. / factorial(i);
	}
	printf("e = %f\n", sum);
	
}
