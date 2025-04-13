#include <stdio.h>
int gcd(int a, int b)
{
    int s;
    if (a > b)
        s = b;
    else
        s = a;
    while (a % s != 0 || b % s != 0)
    {
        s--;
    }
    return s;
}
int lcm(int a, int b)
{
    int l;
    if (a > b)
        l = a;
    else
        l = b;
    while (l % a != 0 || l % b != 0)
    {
        l++;
    }
    return l;
}
int main()
{
    int a;
    int b;
    // out 2.......
    //  printf("Enter A- ");
    //  scanf("%d",&a);
    //  printf("Enter B- ");
    //  scanf("%d",&b);
    //  int lc = lcm(a, b);
    //  int gc=gcd(a,b);
    //  printf("LCM of %d and %d is %d\n", a, b, lc);
    //  printf("GCD of %d %d %d \n",a,b,gc);
    // out 1.......
    int c, d;
    a = 9, b = 6, c = 12, d = 36;
    int lc = lcm(lcm(lcm(a, b), c), d);
    int gc = gcd(gcd(gcd(a, b), c), d);
    printf("\nlcm of %d & %d & %d & %d is %d\n", a, b, c, d, lc);
    printf("GCD of %d, %d, %d, %d is %d\n", a, b, c, d, gc);
}