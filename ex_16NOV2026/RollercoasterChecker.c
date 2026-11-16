#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%d", &height);
    

    //Check age, height and adult supervision
    if (age >= 12) {
        if (height > 150) {
            if (age < 15) {
                printf("Is accompanied by an adult? (1 - yes / 0 - no) ");
                scanf("%d", &hasAdult);
                if (hasAdult) {
                    printf("You can ride with adult supervision!\n");
                }
                else {
                    printf("Sorry, you need an adult with you\n");
                }
            }
            else {
                printf("You can ride by yourself!\n");
            }
        }
        else {
            printf("Sorry, you are not tall enough\n");
        }
    }
    else {
        printf("Sorry, you are too young\n");
    }
    return 0;
}