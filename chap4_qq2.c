//printing natural number using do while loop, taking input 4

#include<stdio.h>

int main(){
    int i=1,a;
    printf("Enter the number:\n");
    scanf("%d",&a);

    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=a);
    
    return 0;
}