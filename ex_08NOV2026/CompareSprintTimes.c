#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int time1;
    int time2;
    printf("Enter time for runner 1: "); //1250
    scanf("%d", &time1);
    printf("Enter time for runner 2: "); //1312
    scanf("%d", &time2);

    //Declare variables for runners and equal time
    int runner1 = (time1 < time2);
    int runner2 = (time1 > time2);
    int equal = (time1 == time2);
    //Print the values
    printf("Runner 1 faster: %d\n", runner1);
    printf("Runner 2 faster: %d\n", runner2);
    printf("Same time: %d\n", equal);

    return 0;
}