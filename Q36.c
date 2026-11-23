// Check if a given character is an alphabet, digit, or special character	



#include <stdio.h>
int main() {
   char c;
   printf("enter the number\n");
   scanf("%c",&c); 

if( c>'a' && c<'z' ){
    printf("it is an  lower case character");
}

else if( c>'A' && c<'Z' ){
    printf("it is an uppercase character");
}

else if(c>='0' && c<='9'){
    printf("It is an digit\n");
}
else{
    printf("it is a special symbol");
}

    return 0;
}
