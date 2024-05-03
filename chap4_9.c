//factorial using for loop

#include<stdio.h>

int main(){
    int i=1,n,fact=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i;i<=n;i++)
    {
        fact = fact*i;
    }

    printf("%d is %d\n",n,fact);
    return 0;
}