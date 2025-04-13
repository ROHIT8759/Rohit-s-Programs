#include <stdio.h>

int main()
{
    int big, small, arr[] = {-10, 0};
    big = small = arr[0];
    for (int i = 1; i < 2; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    printf("laegest element is %d \n", big);
    printf("smallest number is %d", small);
}