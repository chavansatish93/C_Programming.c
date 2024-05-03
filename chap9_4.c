//program to perform complex number operation using structure

#include <stdio.h>

// Define the struct for complex numbers
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

// Function to display a complex number
void display(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main() {
    // Example usage
    struct Complex num1 = {3.0, 4.0}; // 3 + 4i
    struct Complex num2 = {1.0, 2.0}; // 1 + 2i

    // Perform arithmetic operations
    printf("Addition: ");
    display(add(num1, num2));
    
    printf("Subtraction: ");
    display(subtract(num1, num2));
    
    printf("Multiplication: ");
    display(multiply(num1, num2));

    return 0;
}
