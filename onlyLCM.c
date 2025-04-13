#include<stdio.h>
int main()
{
    int a = 5, b = 19, fact;
    int lcm = (a > b) ? a : b;
    // printf("%d\n",lcm);

    while (fact)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            fact = 0;
        }lcm++;
    }
    
}