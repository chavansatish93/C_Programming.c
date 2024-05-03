//printing star pattern in odd form

#include<stdio.h>
void StarPattern_odd(int n);
int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    StarPattern_odd(n);
    return 0;
}

void StarPattern_odd(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    StarPattern_odd(n-1);
    for(int i=0;i<(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
}