#include <stdio.h>
int main()
{
    int n;
    printf("Enetr the size of the arr:-");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = n-1; i >=0 ; i--)
    {
        printf("%d %f", arr[i]);
    }
}