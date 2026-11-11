#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int minor;
    int serious;
    printf("Enter the number of minor mistakes: ");
    scanf("%d", &minor);
    printf("Enter the number of serious mistakes: ");
    scanf("%d", &serious);

    //Print the result here
    if (serious == 0 && minor <= 15) {
        printf("\nResult: Pass\n");
    }
    else {
        printf("\nResult: Fail\n");
    }

    return 0;
}