// Print numbers from 1 to N	
#include <stdio.h>

int main() {
    int number;

    printf("enter the number\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        printf("The number is %d\n",i);
    }



    return 0;
}
