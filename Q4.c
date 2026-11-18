// Convert temperature from Celsius to Fahrenheit and vice versa.

#include <stdio.h>
int main(){
int c;
printf("enter the value of celsius\n");
scanf("%d",&c);

printf("The conversion of celsius to farhenheit is %d", c*(9.0/5.0)+32);


    return 0;
}




// vica verca (reverse)

#include <stdio.h>
int main(){
int f;
printf("enter the value of celsius\n");
scanf("%d",&f);

printf("The conversion of farhenheit to celsius is %f",(f - 32) * 5.0 / 9.0);


    return 0;
}
