//function to print text

#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main(){

    GoodMorning();
    //GoodAfternoon();
    //GoodNight();
    return 0;
}

void GoodMorning()
{
    printf("HELLO GOODMORNING!\n");
    GoodAfternoon();
}

void GoodAfternoon()
{
    printf("HELLO GOODAfternoon!\n");
    GoodNight();
}

void GoodNight()
{
    printf("HELLO GOODNight!\n");
}