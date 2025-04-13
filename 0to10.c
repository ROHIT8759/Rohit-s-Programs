#include <stdio.h>
void printArray(int array[], int size)
{
    printf("Printing process of Array begins:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}
int main()
{
    // for (int i = 0; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    // }
    // return 0;

    //Taking the array size as input.
    int n;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    
    //Creating the array.
    int arr[n];
    for (int i = 0, m; i < n; i++)
    {
        printf("Enter array element number %d:", i + 1);
        scanf("%d", &m);
        arr[i] = m;
    }

    //Printing the original array.
    printf("Original array:\n");
    printArray(arr,n);
    
    //Reversing the array.
    int mid = n/2;
    for (int i = 0, temp; i < mid; i++)
    {
        arr[i]=temp;
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
    //Printing the reversed array.
    printf("Reversed array:\n");
    printArray(arr, n);
}