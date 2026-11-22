#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    //Read equipment name
    char equipment_name[100];
    printf("Enter the equipment name: ");
    fgets(equipment_name, sizeof(equipment_name), stdin);
    equipment_name[strcspn(equipment_name, "\n")] = 0;  // Remove newline

    //Read current stock count
    int stock_count;
    printf("Enter the current stock: ");
    scanf("%d", &stock_count);

    //Read number being loaned out
    int loaned_out;
    printf("Enter the number of loaned out equipment: ");
    scanf("%d", &loaned_out);

    //Read workout intensity (light/moderate/intense)
    char intensity[20];
    printf("Enter the workout intensity (light/moderate/intense): ");
    scanf("%s", intensity);

    //Read workout duration in minutes
    int duration;
    printf("Enter the workout duration (minutes): ");
    scanf("%d", &duration);

    //Read equipment value in dollars
    double value;
    printf("Enter the equipment value: $");
    scanf("%lf", &value);

    //Calculate the updated in-stock count
    int in_stock_count = stock_count - loaned_out;

    //Calculate the new on-loan count
    int on_loan_count = loaned_out;

    //Calculate cooldown time based on intensity
    double multiplier = 1.0;
    if (strcmp(intensity, "light") == 0) {
        multiplier = 0.5;
    }
    else if (strcmp(intensity, "moderate") == 0) {
        multiplier = 1.0;
    }
    else if (strcmp(intensity, "intense") == 0) {
        multiplier = 1.5;
    }
    int cooldown_minutes = (int)floor(duration * multiplier);

    //Calculate insurance fee (2% of equipment value), round to 2 decimal places
    double fee = value * 0.02;

    //Print summary header and the four values, one per line, with labels:
    printf("\n--- Equipment Checkout Summary (%s) ---\n", equipment_name);
    printf("In stock count: %d\n", in_stock_count);
    printf("On loan count: %d\n", on_loan_count);
    printf("Cooldown minutes: %d (for a %d minutes workout)\n", cooldown_minutes, duration);
    printf("Equipment insurance fee: $%.2f\n", fee);

    return 0;
}