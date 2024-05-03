//taking input using %c and %s and comparing two strng

#include<stdio.h>
#include<string.h>

int main(){
    char s1[15];
    char s2[15];
    char c;
    int i=0;

    printf("Enter the string 1:\n");
    scanf("%s",s1);

    printf("Enter second string character by character:\n");

    while(c !='\n')
    {
        fflush(stdin);//entering fresh character
        scanf("%c",&c);//taking input of string char by char

        s2[i] = c;
        i++;
    }

    s2[i-1] = '\0';
    printf("The first string is %s\n", s1);
    printf("The second string is %s\n", s2);

    printf("strcmp for these strings returns %d",strcmp(s1,s2));


    return 0;
}