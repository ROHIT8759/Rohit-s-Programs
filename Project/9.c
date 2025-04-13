#include <stdio.h>

// Function to check if a number is prime
int Prime(int num) {
    if (num <= 1) {
        return 0;  // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

// Function to print prime Fibonacci numbers up to n
void printPrimeFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        // Check if the current Fibonacci number is prime
        if (Prime(a)) {
            printf("%d ", a);
        }

        // Calculate the next Fibonacci number
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int limit;

    // Input the limit
    printf("Enter the limit (n): ");
    scanf("%d", &limit);

    // Print prime Fibonacci numbers up to the given limit
    printf("Prime Fibonacci numbers up to %d are: ", limit);
    printPrimeFibonacci(limit);

    return 0;
}