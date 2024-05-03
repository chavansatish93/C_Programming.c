//creating a string and printing o/p

#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "Welcome!";
    char s2[] = "This is satish!";

    char s3[] = {'C','H','A','V','A','N','\0'};//here \0 is termination  character
    char c[50];

    int length1,length2,length3;

    strlen (s1); //function to measure length
    strlen (s2);
    strlen (s3);

    strcpy(c,s1); // copy the string to the c
    strcpy(c,s2);
    strcpy(c,s3);

    length1 = strlen(s1);//counts the length of the string
    length2 = strlen(s2);
    length3 = strlen(s3);

    strcat(s1,s2);//this will combine s1 and s2 into single unit

    printf("%d\n",length1);
    printf("%d\n",length2);
    printf("%d\n",length3);
  
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("%s\n",s3);

    return 0;
}