#include<stdio.h>

void printArray(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");    
}

int main(){
    int n;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array before reversing:\n");
    printArray(arr, n);

    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("The array after reversing:\n");
    printArray(arr, n);
    return 0;    
}