//2d array and using function displaying content on the screen
#include <stdio.h>

void DisplayArray(int arr[][3], int n, int m);

int main() {
    int n = 3; 
    int m = 3; 
    int arr[n][m];

    printf("%d is the array of %dx%d elements\n", n * m, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter the element of the array at position (%d, %d):\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    DisplayArray(arr, n, m);

    return 0;
}

void DisplayArray(int arr[][3], int n, int m) {
    printf("The array is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
