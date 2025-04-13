#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
int main()
{
    int num, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 && is_prime(i))
        {
            printf("%d ", i);
            sum+=i;
        }        
    }
    printf("The sum of the prime factors is:%d", sum);
    return 0;
}