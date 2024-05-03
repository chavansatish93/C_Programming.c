//here the break statement use and its break the condtion and jump out

#include<stdio.h>

int main(){
    int i;

    for(i=0;i<1000;i++) // this condition is terminated
    {
        printf("%d\n",i);
        if(i==5) // this executed
        {
            break;
        }
    }
    return 0;
}