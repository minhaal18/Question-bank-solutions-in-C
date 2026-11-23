
#include <stdio.h>

int main()
{
    float hours, rate, salary;

    // Read working hours
    printf("Enter hours worked: ");
    scanf("%f", &hours);

    // Read hourly rate
    printf("Enter rate per hour: ");
    scanf("%f", &rate);

    // Calculate salary
    if(hours > 40)
    {
        salary = (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    else
    {
        salary = hours * rate;
    }

    // Display salary
    printf("Total salary = %.2f", salary);

    return 0;
}
