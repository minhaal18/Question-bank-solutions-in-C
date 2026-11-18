// Read three numbers and check if all three are equal (use && ).
#include <stdio.h>
int main (){

int a;
int b;
int c;

printf("enter the number 1\n");
scanf("%d",&a);

printf("enter the number 2\n");
scanf("%d",&b);

printf("enter the number 3\n");
scanf("%d",&c);

if(a==b && b==c){
    printf("All numbers are equal");
}
else{
    printf("The numbers are not equal");
}
    return 0;
}
