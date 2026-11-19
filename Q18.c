// Find the largest of two numbers	


#include <stdio.h>
int main(){

int a;
int b;
printf("enter the number 1\n");
scanf("%d",&a);

printf("enter the number 2\n");
scanf("%d",&b);

if(a>b){
    printf("A is greater than B");
}

  else if(b>a){
    printf("B is greater than A");
}

else{
    printf("both are equal");
}
    return 0;
}
