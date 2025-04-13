#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0;
    int sum = 0;

    for (int i = 2; count < n; ++i) {
        if (is_prime(i)) {
            sum += i;
            ++count;
        }
    }

    printf("Sum of the first %d prime numbers is: %d\n", n, sum);

    return 0;
}
