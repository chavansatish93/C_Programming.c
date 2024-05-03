//sum of first ten natural number using for loop

#include<stdio.h>

int main(){
    int n,i=0,sum=0;

    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum = ((n+1)*i)/2;
        
    }

    printf("%d is the sum and you have entered %d\n",sum,n);
    return 0;
}