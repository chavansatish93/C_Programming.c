//printing sum and average using function and printing value using pointers

#include<stdio.h>
int SumAndAddition(int a, int b,int *sum, float *average);
int main(){
    int a=3,b=4;
    int sum;
    float average;
    SumAndAddition(a,b,&sum ,&average);

    printf("The sum of a and b is: %d\n",sum);
    printf("The average of a and b is :%f\n",average);


    return 0;
}

int SumAndAddition(int a, int b, int *sum, float *average)
{
    *sum = a+b;
    *average = (float)(a+b)/2;
}