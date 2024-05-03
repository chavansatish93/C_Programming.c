//printing natural numbers loop initialized to 0

#include<stdio.h>

int main(){
    int i=0; // loop initialized to zero

    while(i<=20) //num less than 20
    {
        if(i>=10)  // due to intialized we set its starting value
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}