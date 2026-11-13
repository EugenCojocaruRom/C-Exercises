#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    char* season = "";
    
    switch (month) {
    case 1: case 2: case 12:
        season = "Winter";
        break;
    case 3: case 4: case 5:
        season = "Spring";
        break;
    case 6: case 7: case 8:
        season = "Summer";
        break;
    case 9: case 10: case 11:
        season = "Autumn";
        break;
    default:
        season = "Invalid month";
    }

    if (month < 1 || month > 12) {
        printf("Incorrect month.");
    }
    else {
        printf("Month %d is in %s.\n", month, season);
    }
    
    return 0;
}