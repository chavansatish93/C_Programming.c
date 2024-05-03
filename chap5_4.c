//fibonacci series

#include<stdio.h>
void fibonacci(int n);
int main(){
    int n;

    printf("Enter the number upto series do you want to print:\n");
    scanf("%d",&n);

    printf("The seires is:\n");

    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int i,temp,num1=0,num2=1;

    for(i=0;i<=n;i++)
    {
        printf("%d\t",num1);
        temp = num1+num2;
        num1 = num2;
        num2 = temp;
    }
}