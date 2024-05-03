//recursive function to calculate sum

#include<stdio.h>
int sum(int n);
int main(){
    int n;

    printf("Enter the value of n:\n");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Please enter positive number!\n");
        return 1;
    }

    printf("The sum of integer from 1 to %d is:%d\n",n,sum(n));
    return 0;
}

int sum(int n)
{
   if(n==0)
   {
    return 0;
   }

   else{
    return n+sum(n-1);
   }
}