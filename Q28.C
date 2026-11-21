// Check if a triangle is equilateral, isosceles, or scalene given 3 sides	

#include <stdio.h>
int main (){
    int a;
    int b;
    int c;

    printf("enter the side a");
    scanf("%d",&a);


    printf("enter the side b");
    scanf("%d",&b);


    printf("enter the side c");
    scanf("%d",&c);



if(a == b && b == c){ // ALL SIDES EQUAL
    printf("ALL SIDES ARE EQUAL IT IS AN Equilateral TRIANGLE");
}                   

else if (a==b || b==c ||c==a){ // TWO SIDES EQUAL
    printf("IT IS AN Isosceles TRIANGLE");
}


 else {
    printf("ITS AN Scalene");
 }
    return 0;
}
