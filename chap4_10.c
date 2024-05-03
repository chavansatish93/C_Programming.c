//factorial using while loop

#include<stdio.h>

int main(){
    int i=1,n,fact=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n); 

    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("%d is factorial of %d",fact,n);
    return 0;
}