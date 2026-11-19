//  Q20 Check if a character is a vowel or consonant.
#include <stdio.h>
int main (){

char ch;

printf("enter the character\n");
scanf("%c ",&ch);

if( ch== 'a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
printf("It is an vowel");
}

else if (ch=='a' && ch=='z' || ch=='A' && ch=='Z') {
printf("It is constant")
}

else{
    printf("It is a digit");
}
return 0;
}
