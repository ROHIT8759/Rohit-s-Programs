#include <stdio.h>
int main()
{
    int r, p, D;
    char z;
    printf("Enter a no A ");
    scanf("%d", &r);
    printf("Enter a no B ");
    scanf("%d", &p);    
    printf("enter(*, /, +, - ) :- ");
    scanf(" %c", &z);
    switch (z)
    {
    case '*':
        D = r * p;
        printf("%d", D);
        break;
    case '/':
        D = r / p;
        printf("%d", D);
        break;
    case '+':
        D = r + p;
        printf("%d", D);
        break;
    case '-':
        D = r - p;
        printf("%d", D);
        break;

    default:
        printf("\nnot a valid input");
        break;
    }
    return 0;
}