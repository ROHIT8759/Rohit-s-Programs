#include <stdio.h>
void add(int x, int y)
{
    x=x+10;
    printf("%d\n", x + y);
    x=x+10;
}
int main()
{
    int a, b;
    printf("Enter 2 no.s:");
    scanf("%d%d", &a, &b);
    add(a, b);
    add(56,23);
    return 0;
}