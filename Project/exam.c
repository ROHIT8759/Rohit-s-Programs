#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter a no - ");
    scanf("%d %d", &a, &b);
    printf("before A=%d B=%d\n", a, b);
    swap(&a, &b);
    printf("after A=%d B=%d\n", a, b);
}