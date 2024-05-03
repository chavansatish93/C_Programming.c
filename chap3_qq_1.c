#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks:\n");
    scanf("%d", &marks);

    switch (marks)
    {
    case 90 ... 100:
        printf("You pass with grade of 'A+' \n");
        break;

    case 80 ... 89:
        printf("You pass with grade of 'A' \n");
        break;

    case 70 ... 79:
        printf("You pass with grade of 'B+' \n");
        break;

    case 60 ... 69:
        printf("You pass with grade of 'B' \n");
        break;

    case 50 ... 59:
        printf("You pass with grade of 'C' \n");
        break;

    case 40 ... 49:
        printf("You pass with grade of 'D' \n");
        break;

    case 36 ... 39:
        printf("You pass with grade of 'P' \n");
        break;

    default:
        printf("You failed! \n");
        break;
    }
    return 0;
}