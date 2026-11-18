// Divisibility Check: Check whether a number is divisible by 3, 5, both, or neither.


#include <stdio.h>
int main (){
int a;
printf("enter the number\n");
scanf("%d",&a);

if(a%3==0 && a%5==0){
    printf("The number is divisible by 3 and 5");
}

else if(a%3==0){
    printf("the nunber is only divisible by 3");
}

else if(a%5==0){
    printf("the nunber is only divisible by 5");
}

else{
    printf("The number is not divisible by 3 and 5");
}
    return 0;
}
