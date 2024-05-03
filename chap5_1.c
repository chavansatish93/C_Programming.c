//average of three number using funtion

#include<stdio.h>
float average(int a,int b,int c);
int main(){
    int a,b,c;
    
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("Enter the value of c:\n");
    scanf("%d",&c);

    float result = average(a,b,c);

    printf("The average of these three number is :%.2f",result);

    return 0;
}

float average(int a,int b,int c)
{
    float average = (a+b+c)/3;
    return average;
}