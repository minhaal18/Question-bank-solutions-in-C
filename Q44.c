// Print numbers from N to 1	


#include <stdio.h>

int main()
{
    int number;

    // Read number
    printf("Enter the number\n");
    scanf("%d", &number);

    // Print numbers from N to 1
    for(int i = number; i >= 1; i--)
    {
        printf("The number is %d\n", i);
    }

    return 0;
}
