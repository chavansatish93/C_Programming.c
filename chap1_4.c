#include<stdio.h> //program to calculate simple interest

int main(){
    int p,r,t;

    printf("Enter your principle amount:\n");
    scanf("%d",&p);

    printf("Enter your rate for principle amount:\n");
    scanf("%d",&r);

    printf("Enter your principle amount tenure:\n");
    scanf("%d",&t);

    float SI= (p *r*t)/100;

    printf("%.3f",SI);
    return 0;
}