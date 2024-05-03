//checking prime number using for loop

#include<stdio.h>

int main(){
    int n,prime=1,i=2;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(i;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }

    if(prime==0)
      {
        printf("%d is not a prime\n",n);
      }

      else
      {
        printf("%d is prime\n",n);
      }
    return 0;
}