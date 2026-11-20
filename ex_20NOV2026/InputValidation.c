//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    int result = scanf("%d", &num);
    if (result == 1 && (num >= 10 && num <= 50)) {
        // Input was successfully read
        printf("Valid input!\n");
    }
    else if (result == 1 && !(num >= 10 && num <= 50)) {
        printf("Out of range!\n");
    }
    else {
        // Input was invalid
        printf("Invalid input type!\n");
    }


    return 0;
}