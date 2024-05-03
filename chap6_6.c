//changing variable value to ten times using function by call by value 

#include<stdio.h>
void call_by_value(int *ptr);
int main(){
    int i;
    int *ptr=&i;

    printf("Enter the value of i:\n");
    scanf("%d",&i);
    printf("The original value of i is:%d\n",i);

    call_by_value(ptr);

    printf("After passing the value of variable is :%d\n",*ptr);
    return 0;
}

void call_by_value(int *ptr)
{
   *ptr= *ptr *10;
}