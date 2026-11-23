//Given coordinates (x, y), determine which quadrant the point lies in	

#include <stdio.h>

int main()
{
    int x, y;

    // Read coordinates
    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    // Check quadrant
    if(x > 0 && y > 0)
    {
        printf("First Quadrant");
    }
    else if(x < 0 && y > 0)
    {
        printf("Second Quadrant");
    }
    else if(x < 0 && y < 0)
    {
        printf("Third Quadrant");
    }
    else if(x > 0 && y < 0)
    {
        printf("Fourth Quadrant");
    }
    else if(x == 0 && y == 0)
    {
        printf("Origin");
    }
    else
    {
        printf("Point lies on an axis");
    }

    return 0;
}
