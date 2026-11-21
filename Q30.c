//Build a simple calculator (+, −, ×, ÷) using switch-case	

#include <stdio.h>

int main() {

    char operator;
    float a, b;

    printf("Enter number 1: ");
    scanf("%f", &a);

    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {

        case '+':
            printf("Addition = %.2f", a + b);
            break;

        case '-':
            printf("Subtraction = %.2f", a - b);
            break;

        case '*':
            printf("Multiplication = %.2f", a * b);
            break;

        case '/':
            if(b == 0) {
                printf("Cannot divide by zero");
            }
            else {
                printf("Division = %.2f", a / b);
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
