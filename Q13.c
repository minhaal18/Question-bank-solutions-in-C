
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("n << 1 = %d\n", n << 1);
    printf("n >> 1 = %d\n", n >> 1);

    printf("Multiply by 2 = %d\n", n * 2);
    printf("Divide by 2 = %d\n", n / 2);

    return 0;
}
