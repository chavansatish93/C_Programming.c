// program to check greatest of four number

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2)
    {
        if (num2 > num3)
        {
            if (num3 > num4)
            {
                printf("%d is greatest", num1);
            }
        }
    }

    if (num2 > num1)
    {
        if (num1 > num3)
        {
            if (num3 > num4)
            {
                printf("%d is greatest", num2);
            }
        }
    }

    if (num3 > num2)
    {
        if (num2 > num3)
        {
            if (num3 > num4)
            {
                printf("%d is greatest", num3);
            }
        }

        else
        {
            printf("%d is greatest", num4);
        }
    }
        return 0;
    }