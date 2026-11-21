// Check if a number is positive, negative, or zero — then if positive check even/odd	

#include <stdio.h>
int main (){
int number;
printf("enter the number");
scanf("%d",&number);
                                  // nested if
if(number>0){
    printf("The number is positive");

if(number%2==0){
    printf("it is an even number");
}
else{
    printf("it is an odd number");
}
}
else if(number<0){
    printf("The number is negative");
}

else {
printf("The number is zero");

}




    return 0;
}
