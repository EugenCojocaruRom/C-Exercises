#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int light, home, vacation;
    printf("Enter a value for the light: ");
    scanf("%d", &light);
    printf("Enter 1 for 'at home' or 0 for 'not home': ");
    scanf("%d", &home);
    printf("Enter 1 for 'on vacation' or 0 for 'not on vacation': ");
    scanf("%d", &vacation);

    printf("\n");
    //Set the rules for printing 'on' or 'off'
    if ((light < 30 && home) || vacation) {
        printf("Porch light on");
    }
    else {
        printf("Porch light off");
    }
    printf("\n");

    return 0;
}