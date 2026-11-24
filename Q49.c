//Find the sum of digits of a number	
/*
C Program: Sum of Digits of a Number
1. Variables
n = Stores the original number.
rem = Stores the last digit.
sum = Stores the total sum. Initially 0.
2. Important operators
% 10 = Gets the last digit.
/ 10 = Removes the last digit.
n != 0 = Loop continues as long as n is not zero.
3. Working of the while loop

For example: n = 1234

First iteration:

rem = 1234 % 10 = 4
sum = 0 + 4 = 4
n = 1234 / 10 = 123

Second iteration:

rem = 123 % 10 = 3
sum = 4 + 3 = 7
n = 123 / 10 = 12

Third iteration:

rem = 12 % 10 = 2
sum = 7 + 2 = 9
n = 12 / 10 = 1

Fourth iteration:

rem = 1 % 10 = 1
sum = 9 + 1 = 10
n = 1 / 10 = 0
4. When does the loop stop?
The while condition is n != 0.
When n becomes 0, the condition becomes FALSE.
The loop stops.
5. Final answer

Sum = 4 + 3 + 2 + 1 = 10

Remember
% 10 → Get the last digit.
/ 10 → Remove the last digit.
sum + rem → Add the extracted digit to the sum.
n != 0 → Controls when the loop stops.


*/

#include <stdio.h>

int main() {
    int number;
    int reminder;
    int sum=0;
    printf("enter the number\n");
    scanf("%d",&number);

    while(number!=0){ // this run the loop until the condition is false =0.
       reminder=number%10; // gives last digit of the program.
       sum=sum+reminder;
       number=number/10;// remove the last digt
    }
    printf("The sum of the given number is %d",sum);


    return 0;
}
