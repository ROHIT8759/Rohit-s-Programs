#include<stdio.h>
int linearscarch (int arr[], int n, int x){
    int pos,i;
    pos=1;
    for(i=0;i<n; i++) {
        if (arr[i]== x)
        {
            pos = i;
            printf("Element %d found at position %d\n ", x, ++pos);
            return i; //
        }
    }
    return pos;
}
int main ()
{
    int result, x,i ,n, arr[2000];
    printf("Enter the size of the arr: \n");
    scanf("%d", &n);
    printf("Enter element : \n");
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Printing the arr : ");
    for(i=0;i<n; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    printf("Enter the element you want to search for :  ");
    scanf("%d", &x);
    result=linearscarch(arr, n, x);
    if (result == -1) {
        printf(" Element is not found \n");
    }
    return 0;
}