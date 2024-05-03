//printing value of avriable using pointer to pointer

#include<stdio.h>

int main(){
    int i=8;
    int *ptr;
    int **ptr_ptr;

    ptr=&i;
    ptr_ptr=&ptr;

    printf("The value of variable is:%d\n",**ptr_ptr);

    return 0;
}