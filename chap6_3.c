//changing variable value to ten times using function by call by reference

#include<stdio.h>
void reference_of_variable(int *ptr);
int main(){
    int i;
    int *ptr=&i;

    printf("Enter the value of i:\n");
    scanf("%d",&i);
    printf("The original value of i is:%d\n",i);

    reference_of_variable(ptr);

    printf("After passing the value of variable is :%d\n",*ptr);
    return 0;
}

void reference_of_variable(int *ptr)
{
    *ptr = *ptr * 10;
}