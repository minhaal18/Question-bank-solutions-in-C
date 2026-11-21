/*
Q29
Given 3 sides, check if a valid triangle can be formed	

Remember these 3 conditions
Sum of side A and B must be greater than C.

Sum of side A and C must be greater than B.

Sum of side B and C must be greater than A.

*/


#include <stdio.h>
int main(){
int a;
int b;
int c;

printf("enter the side a");
scanf("%d",&a);

printf("enter the side b");
scanf("%d",&b);

printf("enter the side c");
scanf("%d",&c);

if(a > 0 && b > 0 && c > 0 &&
   a + b > c && a + c > b && b + c > a) {

    printf("Valid triangle");
}

else{
    printf("invalid traingle");
}

    return 0;
}
