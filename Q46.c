 
//Print all odd numbers from 1 to N	
#include <stdio.h>

int main() {
    int number;
printf("enter the number\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        
        if(i%2!=0){
            printf("%d is odd number\n",i);
        }
    }

    return 0;
}
