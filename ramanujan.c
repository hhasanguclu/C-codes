#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int i, n,  x, y, k;

    printf("Ramanujan sayilarinin bulunacagi araligi giriniz: ");
    scanf_s("%d",&n);

    for (i = 0; i < n; i++) {
        k = 0;
        for (x = 1; x * x * x < i; x++) {
            for (y = x + 1; x * x * x + y * y * y <= i; y++) {

                if (x * x * x + y * y * y == i) {
                    k++;
                    x++;
                }
            }
        }
        if (k == 2) {
                       
            printf("%d \n", i);
        }
    }

    return 0;
}
