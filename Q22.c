/*

Question: Write a program to input a person's age and classify them into one of the following age categories:

Child: Age below 13 years

Teenager: Age 13 to 19 years

Adult: Age 20 to 59 years

Senior: Age 60 years and above
*/




#include <stdio.h>

int main() {
    int age;

    printf("Enter the age\n");
    scanf("%d", &age);

    if(age < 13) {
        printf("You are in child category");
    }
    else if(age >= 13 && age <= 19) {
        printf("You are in teenager category");
    }
    else if(age >= 20 && age <= 59) {
        printf("You are in adult category");
    }
    else {
        printf("You are in senior category");
    }

    return 0;
}
