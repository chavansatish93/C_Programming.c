//reading integer from txt file

#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;

    ptr = fopen("demo10_1.txt","r");

    fscanf(ptr,"%d %d %d ",&a,&b,&c);
    printf("The values are: %d %d %d",a,b,c);
    return 0;
}