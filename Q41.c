// Clock Angle : Given hour and minute, calculate the smaller angle between the two hands.	

#include <stdio.h>
int main()
{
    int h, m;
    float angle1, angle2, angle;

    // Read hour and minute
    printf("Enter hour: ");
    scanf("%d", &h);

    printf("Enter minute: ");
    scanf("%d", &m);

    // Calculate hour hand angle
    angle1 = (h * 30) + (m * 0.5);

    // Calculate minute hand angle
    angle2 = m * 6;

    // Find difference between angles
    angle = angle1 - angle2;

    // Convert negative angle to positive
    if(angle < 0)
    {
        angle = -angle;
    }

    // Find smaller angle
    if(angle > 180)
    {
        angle = 360 - angle;
    }

    // Display smaller angle
    printf("Smaller angle = %.2f degrees", angle);

    return 0;
}
