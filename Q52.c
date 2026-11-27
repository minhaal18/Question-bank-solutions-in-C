// Happy Number: Repeatedly replace a number with the sum of the squares of its digits. Determine whether it eventually reaches 1.	
/*

A happy number is a number that is repeatedly replaced by the sum of the squares of its digits until the result becomes 1.

If the result becomes 1, it is called a Happy Number. Otherwise, it is an Unhappy Number.

*/
#include <stdio.h>
int main() {
    int number;
    int reminder;
    int count=0;
    int a;

    printf("enter the number");
    scanf("%d",&number);
a=number;
while(number != 1 && number != 4){
reminder=number%10;
count=count+reminder*reminder;
number=number/10;
}

if(a==1){
    printf("It is the happy number");
}
else{
    printf("its not a happy number");
}
    return 0;
}
