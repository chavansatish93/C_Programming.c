#include<stdio.h> //program to convert celcius to fahernheit

int main(){
    float fer,cel;

    printf("Enter the celcius:\n");

    scanf("%d",&cel);

    fer = (9/5)*cel+32;
    
    printf("%.2f",fer);

    return 0;
}