
// Q21 Ticket Pricing : Calculate ticket price based on the customer's age.


#include <stdio.h>
int main(){

int age;

printf("enter the age of the customer\n");
scanf("%d",&age);

if (age < 0) {
        printf("Invalid age");
    }
 else if(age<=5){
printf("The ticket price is %d",25000);
}

 else if(age<=18){
printf("The ticket price is %d",50000);
}

else{
printf("The ticket price is %d",75000);
}


return 0;
}
