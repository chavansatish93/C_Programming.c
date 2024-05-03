//printing table of 2d array using function

#include <stdio.h>

void MulTable(int table[], int num) {
    for (int i = 0; i < 10; i++) {
        table[i] = num * (i + 1);
    }
}

void Tables(int table[], int num) {
    printf("The table of %d is:\n", num);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }
}

int main() {
    int arr[3][10];

    // Generating and storing multiplication tables
    MulTable(arr[0], 2);
    MulTable(arr[1], 7);
    MulTable(arr[2], 9);

    // Printing multiplication tables
    Tables(arr[0], 2);
    Tables(arr[1], 7);
    Tables(arr[2], 9);

    return 0;
}

