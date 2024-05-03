//writing our own version of stringlen function....

#include<stdio.h>

int strlen(char *st)
{   char *ptr=st;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
        
    }
    return len;
}

int main(){
    char st[]="satish";
    int length= strlen(st);

    printf("The lenght of this string is %d\n",length);
    return 0;
}