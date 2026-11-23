// Read the cost price and selling price — print profit, loss, or no profit no loss	

#include <stdio.h>
int main() {
float cost_price ;
float selling_price;
float z;
printf("enter the cost price\n");
scanf("%f",&cost_price);

printf("enter the selling price\n");
scanf("%f",&selling_price);

z=selling_price-cost_price;

if(cost_price==selling_price){
    printf("no profit and no loss");
}

else if(z>0){
printf("The profit is %f",z);
}


else{
    printf("The loss is %f",z);
}
    return 0;
}
