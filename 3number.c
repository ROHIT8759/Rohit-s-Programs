#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER NO A:-");
    scanf("%d", &a);
    printf("ENTER NO B:-");
    scanf("%d", &b);
    printf("ENTER NO C:-");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    return 0;
}
