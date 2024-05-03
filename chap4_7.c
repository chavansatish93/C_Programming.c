//sum of first ten natural number using for loop


#include<stdio.h>

int main(){
    int n,i=0,sum=0;

    printf("Enter the value of n:\n");
    scanf("%d",&n);

    do
    {
        sum+=i;
        i++;
    } while (i<=n);

    printf("%d is the sum and you have entered %d\n",sum,n);
    
    return 0;
}