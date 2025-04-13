#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int limit) {
    bool *is_prime = malloc((limit + 1) * sizeof(bool));
    if (is_prime == NULL) {
        // Handle memory allocation error
        exit(1);
    }

    for (int i = 0; i <= limit; i++) {
        is_prime[i] = true;
    }

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    printf("Primes up to %d: ", limit);
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }

    free(is_prime);
}

int main() {
    int limit;
    printf("Enter the upper bound of the range: ");
    scanf("%d", &limit);
    sieve_of_eratosthenes(limit);
    return 0;
}