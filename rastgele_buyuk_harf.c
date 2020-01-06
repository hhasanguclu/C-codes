#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void sleep(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec);
}
int main() {

	while (1) {

		int c = rand() % 128;

		if (isupper(c))
		{
			putchar(c);

			sleep(0.05);
		}
	}
}
