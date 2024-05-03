//printing address of variable using function

#include<stdio.h>
void address(int *ptr);
int main(){
    int i;
    int *ptr = &i;
    
    printf("The address of before function pass i is:%u\n",&i);
    address(ptr);
    printf("The address of i after function pass is:%u\n",(void*)ptr);
    //here address are same because we are passing address by reference not by value
    return 0;
}

void address(int *ptr)
{
    printf("The address inside function is:%u\n",(void*)ptr);
    return 0;
}