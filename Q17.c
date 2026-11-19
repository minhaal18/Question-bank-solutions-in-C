//  Q17 Check if a year is a leap year

#include <stdio.h>
int main (){

int year;

printf("Enter the year\n");
scanf("%d",&year);

if(year%4==0 && year%100!=0 || year%400==0){
printf("it is a leap year");
}
else{
printf("It is not a leap year");

}
return 0;
}
