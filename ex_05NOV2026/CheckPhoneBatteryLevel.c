#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int charge;
    printf("Enter battery charge: ");
    scanf("%d", &charge);

    int is_low = (charge < 20);
    printf("Low battery: %d\n", is_low);
    int full_charge = (charge == 100);
    printf("Fully charged: %d\n", full_charge);
    int missing_charge = (100 - charge);
    printf("Percent to full: %d%%\n", missing_charge);

    return 0;
}