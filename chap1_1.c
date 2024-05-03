#include<stdio.h> //program to calculate area of rectangular

int main(){
    int l,b;
    printf("Enter the values of Lenght and breath:\n");
    scanf("%d %d",&l,&b);

    int area = l*b;

    printf("The value of area is:%d",area);
    return 0;
}