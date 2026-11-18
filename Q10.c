//Check if a character is uppercase, lowercase, digit, or special character.
#include <stdio.h>
int main (){
char alpha;
printf("enter the alphabet\n");
scanf("%c",&alpha);

if(alpha>='A' && alpha<='Z'){
    printf("The alphabet is uper case\n");
}

 else if(alpha>='a' && alpha<='z'){
    printf("The alphabet is lower case\n");
}


 else if(alpha>='0' && alpha<='9'){
    printf("It is an digit\n");
}

else{
    printf("It is an special symbol");
}


    return 0;
}
