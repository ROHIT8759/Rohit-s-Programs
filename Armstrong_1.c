#include <stdio.h>
#include <math.h>
int main()
{
    int r, s, n, d, t;
    for (int n = 1; n <= 1000; n++)
    {
        d = 0, s = 0;

        t = n;
        while (n > 0)
        {
            n = n / 10;
            d = d + 1;
        }
        n = t;
        while (n > 0)
        {
            r = n % 10;
            s = s + pow(r, d);
            n = n / 10;
        }
        n = t;
        if (n == s)
        {
            printf("\n %d is Armstrong number", n);
        }
        else
            printf("\n %d is not Armstrong number", n);
    }
}