//Calculate the sum of first N natural numbers	
#include <stdio.h>
int main() {
    int number;
    int sum=0;
    printf("enter the number\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
         sum=sum+i;
    }
    printf("The number is %d\n",sum);
    return 0;
}
