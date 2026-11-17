#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num = 255;
    float pi = 3.14159;
    char letter = 'A';

    //Print the values as requested
    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Pi: %.2f\n", pi);
    printf("Letter: %c\n", letter);
    printf("ASCII value: %d\n", letter);

    return 0;
}