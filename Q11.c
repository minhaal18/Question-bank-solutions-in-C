// Check if a number is even or odd using bitwise AND ( n & 1 )
#include <stdio.h>
int main (){
int number;
printf("Enter the number\n");
scanf("%d",&number);

if((number & 1)==0){  // Remember: n & 1 checks the last binary bit of a number, 
    //which tells us whether it is even or ODD
    printf("the number is even");
}
else{
    printf("The number is odd");
}


    return 0;
}
