#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int weight;
    int limit;
    printf("Enter the weight: ");
    scanf("%d", &weight);
    printf("Enter the weight limit: ");
    scanf("%d", &limit);

    // Declare variables for overweight, at limit and kg to spare
    int overweight = weight > limit;
    int at_limit = (weight == limit);
    int spare = (limit - weight);

    // Print the three lines
    printf("Overweight: %d\n", overweight);
    printf("At the limit: %d\n", at_limit);
    if (spare <= 0) {
        printf("Kilograms to spare: none\n");
    }
    else {
        printf("Kilograms to spare: %d\n", spare);
    }
    return 0;
}
