//first ten natural number and their sum using while loop

#include<stdio.h>

int main(){
    int i=0,n,sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    
    while(i<=n)
    {
      sum +=i;
      i++;
    }
    printf("The sum is:%d\n",sum);
    return 0;
}