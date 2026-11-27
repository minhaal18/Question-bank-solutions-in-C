// Check if a number is a palindrome.	
//A number is called a palindrome if it reads the same forward and backward.

#include <stdio.h>
int main() {
    
int number;
int reminder;
int count=0;
int original;

printf("enter the number\n");
scanf("%d",&number);
original=number;
while(number!=0){
reminder=number%10;
count=count*10+reminder;
number=number/10;
}
if(count==original){
    printf("The number is palindrome");
}
else{
    printf("The number is not palindrone");
}

    return 0;
}
