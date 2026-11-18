// Check if a number is positive, negative, or zero.

#include <stdio.h>
int main (){
int number;
printf("enter the number\n");
scanf("%d",&number);

if(number>0){
    printf("The numbeer is positive");
}
else if (number<0){
    printf("The number is negative");
}
else{
    printf("The number is zero");
}
}
