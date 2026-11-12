#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int grade;
    do {
        printf("Enter the score (1-100): ");
        scanf("%d", &grade);
        switch (grade / 10) {
        case 10:case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
        }
    } while (1 <= grade <= 100);

    return 0;
}