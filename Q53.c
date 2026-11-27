
#include <stdio.h>

int product(int number)
{
    int reminder;

    if (number == 0)
        return 1;

    reminder = number % 10;

    return reminder * product(number / 10);
}

int main()
{
    int number;

    printf("Enter the number\n");
    scanf("%d", &number);

    printf("The product of all the digits is %d", product(number));

    return 0;
}
