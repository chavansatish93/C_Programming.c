//Encrypting string

#include<stdio.h>

void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0')
    {
        *ptr = *ptr+1;//encrypting string by adding one character
        ptr++;
    }
}
int main(){
    char c[]= "Gaurav";
    encrypt(c);

    printf("Encrypted string is : %s",c);
    return 0;
}


