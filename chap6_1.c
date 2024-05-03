//printing value and address of varibale

#include<stdio.h>

int main(){
    int a=6;
    int *j = &a;

    printf("The value of variable is:%d\n",*j);
    printf("The address of variable is:%u\n",&a);

    printf("The value of variable is:%d\n",&*j);//prints the address

    printf("The address of variable is:%u\n",&j);//prints the address of pointer
    return 0;
}