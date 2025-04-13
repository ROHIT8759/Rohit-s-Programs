#include<stdio.h>

int Prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void PrimeFibonaccinumber(int n)
{
    int a = 0, b = 1, c;
    while (a <= n)
    {
        if (Prime(a))
        {
            printf("%d ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }
}

