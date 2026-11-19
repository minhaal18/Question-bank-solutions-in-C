/*
Question: Write a C program to input an hour (in 24-hour format) and display the appropriate time greeting based on the entered hour.

Classify the time into the following categories:

Morning: 5 AM to 11 AM (5–11)

Afternoon: 12 PM to 4 PM (12–16)

Evening: 5 PM to 7 PM (17–19)

Night: 8 PM to 4 AM (20–23 and 0–4)

*/



#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter time in 24-hour format:\n");

    printf("Enter hour: ");
    scanf("%d", &hour);

    printf("Enter minute: ");
    scanf("%d", &minute);

    if(hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time");
    }
    else if(hour >= 5 && hour < 12) {
        printf("Good Morning");
    }
    else if(hour >= 12 && hour < 17) {
        printf("Good Afternoon");
    }
    else if(hour >= 17 && hour < 20) {
        printf("Good Evening");
    }
    else {
        printf("Good Night");
    }

    return 0;
}
