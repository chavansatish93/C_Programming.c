// tax calculation 

#include <stdio.h>

int main()
{
    float tax;
    int income;

    printf("Enter your income:\n");
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    else if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
    }

    else if(income<250000)
    {
        printf("As your income is below tax line, you not allow to pay tax!\n");
    }

    else
    {
        tax = tax + 0.3 * (income - 1000000);
    }

    printf("Your payable tax is:%.3f\n", tax);
    return 0;
}