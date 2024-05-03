//10 integer array and stoaring multiplication table of 5 in it

#include <stdio.h>
/// @brief 
/// @return 
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5X%d = %d\n", i + 1, arr[i]);
    }

    return 0;
}