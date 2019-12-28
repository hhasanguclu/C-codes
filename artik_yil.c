#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isleap(int y) {

	return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int main() {
	
	int year;

	printf("bir yil degeri giriniz: ");
	scanf("%d", &year);

	if (isleap(year))
	{
		printf("%d artik yil\n", year);
	}
	else
		printf("%d artik yil degil\n", year);
}
