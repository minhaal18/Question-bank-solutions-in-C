// Scholarship eligiblity : Determine eligibility based on marks, attendance, and family income.	
#include <stdio.h>

int main() {
    int marks;
    int attendence;
    int family_income;

printf("enter the marks\n");
scanf("%d",&marks);

printf("enter the attendence\n");
scanf("%d",&attendence);

printf("enter the family_income\n");
scanf("%d",&family_income);

if(marks>=80 && attendence>=75 && family_income<=20000){
printf("you are eligible");
}
else{
    printf("you are not eligible");
}

    return 0;
}
