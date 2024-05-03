//decrypting string

#include<stdio.h>
void dencrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
}
int main(){
    char c[]= "Hbvsbw";
    dencrypt(c);

    printf("decrypted string is : %s",c);
    return 0;
}


