//  Q19 Find the largest of three numbers

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("A is the largest number");
    }
    else if (b >= a && b >= c) {
        printf("B is the largest number");
    }
    else {
        printf("C is the largest number");
    }

    return 0;
}
