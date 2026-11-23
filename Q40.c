// ATM Withdrawal : Approve or reject a withdrawal based on amount, balance, and minimum-balance rules.	
#include <stdio.h>

int main() {
    float amount;
float balance=5000;

printf("enter the amount to withdraw");
scanf("%f",&amount);

if(amount>balance){
    printf("unsufficient balance which is %f",balance);
}
 else if(balance - amount < 500){
    printf("minimum balance required");
 }
else{
   balance = balance - amount;

        printf("Withdrawal successful\n");
        printf("Remaining balance = %.2f", balance);
}
    return 0;
}
