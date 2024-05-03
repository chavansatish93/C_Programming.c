//array of 10 number and equilating two pointers address

#include<stdio.h>

int main(){
    int arr[10];

    int *ptr=&arr[0];//this pointer points to 1st element
    ptr = ptr+2;

    if(ptr==&arr[2])
    {
        printf("This points to same address\n");
    }

    else{
        printf("This does not points\n");
    }

    return 0;
}