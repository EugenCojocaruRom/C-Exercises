#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    printf("Enter the weight: ");
    weight_result = scanf("%f", &weight);
    printf("Enter the height: ");
    height_result = scanf("%f", &height);

    //Validate input
    if (weight_result != 1 || height_result != 1) {
        //Input was invalid
        printf("Invalid input type!\n");
    }
    else if (weight < 30.0f || weight > 300.0f) {
        //Weight out of range
        printf("Weight out of range!\n");
    }
    else if (height < 1.0f || height > 2.5f) {
        //Height out of range
        printf("Height out of range!\n");
    }
    else {
        //Calculate and print BMI
        bmi = weight / (height * height);
        printf("BMI: %.1f\n", bmi);

        //Determine and print weight category
        if (bmi < 18.5f) {
            printf("Category: Underweight\n");
        }
        else if (bmi < 25.0f) {
            printf("Category: Normal weight\n");
        }
        else if (bmi < 30.0f) {
            printf("Category: Overweight\n");
        }
        else {
            printf("Category: Obese\n");
        }
    }

    return 0;
}