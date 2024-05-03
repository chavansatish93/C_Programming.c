//pointer arithmatic 

#include<stdio.h>

int main() {
    int num = 5;
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of arr
    int **ptr_ptr = &ptr; // Pointer to pointer

    // Number to pointer addition
    printf("Number to pointer addition: *(ptr + num) = %d\n", *(ptr + num));

    // Number to pointer subtraction
    printf("Number to pointer subtraction: *(ptr - num) = %d\n", *(ptr - num));

    // Pointer to pointer subtraction
    printf("Pointer to pointer subtraction: *ptr - **ptr_ptr = %d\n", *ptr - **ptr_ptr);

    // Comparison of two pointers
    if (ptr == arr) {
        printf("Pointers ptr and arr are pointing to the same memory location.\n");
    } else {
        printf("Pointers ptr and arr are not pointing to the same memory location.\n");
    }

    return 0;
}
