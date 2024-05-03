//checking prime number using while loop

#include<stdio.h>

int main(){
    int n, i = 2, prime = 1;

    printf("Enter n:\n");
    scanf("%d", &n);

    // If n is less than 2, it cannot be prime
    if (n < 2) {
        printf("%d is not a prime\n", n);
        return 0;
    }

    // Check divisibility of n from 2 to n/2
    while (i <= n/2) {
        if (n % i == 0) {
            prime = 0; // Set prime to 0 if n is divisible by i
            break;
        }
        i++; // Increment i for the next iteration
    }

    // Check if prime is still 1, if yes then n is prime
    if (prime == 1)
        printf("%d is a prime\n", n);
    else
        printf("%d is not a prime\n", n);

    return 0;
}
