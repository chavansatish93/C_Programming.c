//sum occuring in the multiplication table of 8

#include<stdio.h>

int main(){
    int n,i=1,sum,t;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {   t = 8*i;
        sum += t;
    }

    printf("%d is the sum\n",sum);
    return 0;
}