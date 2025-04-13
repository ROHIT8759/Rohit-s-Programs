// SUM OF N FIBONACCI SERIES

#include <stdio.h>
void fibonachenumber(int x)
{
    int f = 1, temp = 1, s = 0, r = 0;
    printf(" First %d Fibonachi no are - ", x);
    for (int i = 1; i <= x; i++)
    {
         r = r + temp;
        printf("%d ", temp);
        temp = f + s;
        s = f;
        f = temp;
    }
    printf("\nthe sum of the first %d fibonachi no is %d", x,r);
}
int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d", &n);
    fibonachenumber(n);
    return 0;
}