//printing n natural numbers in reverse order

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter n value:\n");
    scanf("%d",&n);

    for(i=n;i;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}