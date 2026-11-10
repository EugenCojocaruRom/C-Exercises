#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int temperature;
    char scale;
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    printf("Enter temperature scale (C or F): ");
    scanf(" %c", &scale);

    if (scale == 'F' || scale == 'f') {
        temperature = (temperature - 32) * 5 / 9;
    }
    if (temperature < 0) {
        printf("Temperature: %d°C -> Freezing", temperature);
    }
    else if (temperature <= 20) {
        printf("Temperature: %d°C -> Cold", temperature);
    }
    else if (temperature <= 30) {
        printf("Temperature: %d°C -> Pleasant", temperature);
    }
    else {
        printf("Temperature: %d°C -> Hot", temperature);
    }

    return 0;
}