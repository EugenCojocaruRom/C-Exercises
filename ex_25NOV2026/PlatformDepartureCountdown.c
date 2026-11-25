#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int minutes;
    printf("Enter the number of minutes until departure: ");
    scanf("%d", &minutes);

    //Count down to 1, then print 'Departing'
    printf("Countdown: \n");
    if (minutes == 0) {
        printf("Departing\n");
    }
    else {
        do {
            printf(" %d...\n", minutes);
            minutes--;
        } while (minutes >= 1);
        printf("Departing!\n");
    }
    return 0;
}