#include<stdio.h>// program to calculate area of circle,volume

int main(){
    int r,h;
    float pi=3.142;
    printf("Enter the radius of circle:\n");
    scanf("%d",&r);

    printf("Enter the height of circle:\n");
    scanf("%d",&h);
    float volume = pi*r*r*h;

    printf("The value is:%.2f",volume);
    return 0;
}