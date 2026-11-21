/*

Rate per unit

0–100 units

₹1.50

101–200 units

₹2.50

201–300 units

₹4.00

Above 300 units

₹5.00



*/




#include <stdio.h>

int main() {

    int units;
    float bill;

    printf("Enter the units: ");
    scanf("%d", &units);

    if(units < 0 || units > 100000) {
        printf("Invalid units!");
    }

    else if(units <= 100) {
        bill = units * 1.50;
        printf("Total bill = Rs. %.2f", bill);
    }

    else if(units <= 200) {
        bill = 150 + (units - 100) * 2.50;
        printf("Total bill = Rs. %.2f", bill);
    }

    else if(units <= 300) {
        bill = 400 + (units - 200) * 4.00;
        printf("Total bill = Rs. %.2f", bill);
    }

    else {
        bill = 800 + (units - 300) * 5.00;
        printf("Total bill = Rs. %.2f", bill);
    }

    return 0;
}
