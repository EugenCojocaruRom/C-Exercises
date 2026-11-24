#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 2;
    printf("Even numbers up to %d: ", n);
    while (count <= n && count % 2 == 0) {
        printf("%d ", count);
        count += 2;
    }

    return 0;
}