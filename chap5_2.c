//using functio conversion of celsius into fahrenheit

#include<stdio.h>
float temp(float celcius);
int main(){
    float far,celcius;
    printf("Enter the celcius:\n");
    scanf("%f",&celcius);

    far = temp(celcius);

    printf("The converted value is:%.2f\n",far);
    return 0;
}

float temp(float celcius)
{
    return  (celcius* 9/5) + 32;
}