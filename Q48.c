
#include <stdio.h>

int main()
{
    int number, count = 0;

    // Read number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Count digits
    while(number != 0) // condition
    {
        number = number / 10;   // Removes the last digit of the number
        count++;
    }

    // Display count
    printf("Total number of digits = %d", count);

    return 0;
}
