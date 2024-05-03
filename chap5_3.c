//calculating force using function

#include<stdio.h>

float force(float mass);

int main(){
    float mass;
    printf("Enter the valus od mass:\n");
    scanf("%f",&mass);

    float force_of_attraction = force(mass);

    printf("The force is:%.3f N\n",force_of_attraction);

    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}