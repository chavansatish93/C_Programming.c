//reversing the array inputed
#include<stdio.h>

void ArrayReverse(int *arr, int n);

int main(){
    int arr[5], i;

    for(i = 0; i < 5; i++) {
        printf("Enter the numbers in array:\n");
        scanf("%d", &arr[i]);
    }
   
    ArrayReverse(arr, 5);
    
    printf("Reversed Array: [");
    for(i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}

void ArrayReverse(int *arr, int n) {
    int temp;
    for(int i = 0; i < (n / 2); i++) {
       temp = arr[i];
       arr[i] = arr[n - i - 1];
       arr[n - i - 1] = temp;
    }
}
