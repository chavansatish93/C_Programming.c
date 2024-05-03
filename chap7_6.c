// using the array counting positive integer using function

#include <stdio.h>
int countPositive(int arr[], int size)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, -6, 7, -8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int numPositive = countPositive(arr, size);
    printf("The number of positive integers in the array is: %d\n", numPositive);
    return 0;
}
