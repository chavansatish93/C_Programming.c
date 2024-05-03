#include<stdio.h>

int main(){
    char ch;
//prorgam to check uppercase or lowercase from entered character
    printf("Enter any character(a-z or A-Z):\n");
    scanf("%c",&ch);


    if(ch>=97 && ch<=122)
    {
        printf("%c character is lowercase!\n",ch);
    }

    else{
        printf("%c character is uppercase!\n",ch);
    }
    return 0;
}