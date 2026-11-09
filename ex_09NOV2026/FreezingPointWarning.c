#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int temp;
    printf("Enter a temperature: ");
    scanf("%d", &temp);

    //Print the warning for each temperature interval
    if (temp <= 0) {
        printf("Very cold: ice warning!");
    }
    else if (temp <= 10) {
        printf("Bring a coat: chilly");
    }
    else if (temp <= 24) {
        printf("Not bad weather: mild");
    }
    else {
        printf("Hydrate plenty: hot");
    }
    return 0;
}
