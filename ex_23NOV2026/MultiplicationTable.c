#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number to multiply: ");
    scanf("%d", &n);
    int result;
    for (i = 1; i <= 10; i++) {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }

    return 0;
}