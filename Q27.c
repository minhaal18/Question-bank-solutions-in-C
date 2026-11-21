/*
Given marks (0–100), print grade: A (≥90), B (≥80), C (≥70), D (≥60), F (<60)	
*/


#include <stdio.h>
int main(){
    
int marks;
printf("enter the marks");
scanf("%d",&marks);

if(marks<0 || marks>100){
printf("invalid marks");
}
else if (marks>=90){
printf("YOU ARE PASSED WITH GRADE A");

}

else if (marks>=80){
printf("YOU ARE PASSED WITH GRADE B");

}

else if (marks>=70){
printf("YOU ARE PASSED WITH GRADE C");

}


else if (marks>=60){
printf("YOU ARE PASSED WITH GRADE D");

}

else {
printf("YOU ARE  FAILED");

}


return 0;
}
