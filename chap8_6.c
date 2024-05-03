//no.of repeated character count of string

#include<stdio.h>
//#include<string.h>
int occurence(char st[],char c)
{
    char *ptr = st;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
          count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "satish";
   int count = occurence(st,'s');

   printf("occurence is = %d",count);
    return 0;
}