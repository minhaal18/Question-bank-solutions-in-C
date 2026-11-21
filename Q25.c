// Read a number (1–7) and print the corresponding day of the week	

#include <stdio.h>
int main (){
int day;
printf("enter the day");
scanf("%d",&day);

if(day>7 || day<1){
    printf("invalid");
}
else{
switch(day){

case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;

case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;

}

}


    return 0;
}
