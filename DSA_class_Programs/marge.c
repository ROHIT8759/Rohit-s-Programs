#include <stdio.h>

void merge(int arr[], int beg, int mid, int end) 
{
    int k,i = beg, j = mid + 1, index = 0;
    int temp[end-beg + 1];

    while (i <= mid && j <= end) 
	{
        if (arr[i] < arr[j]) 
		{
            temp[index++] = arr[i++];
        } else 
		{
            temp[index++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[index++] = arr[i++];
    }

    while (j <= end) 
	{
        temp[index++] = arr[j++];
    }

    for (k = beg; k <= end; k++) 
	{
        arr[k] = temp[k - beg];
    }
}

void merge_sort(int arr[], int beg, int end) 
{
    if (beg < end) 
	{
        int mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}

int main() 
{
	int i,n,arr[4000];;
    printf("Enter the size of the array:\n");
  	scanf("%d", &n);
  	printf("Enter the elements:\n");
  	for (i = 0; i < n; i++) 
	  {
	    scanf("%d", &arr[i]);
	  } 
    printf("Original array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n-1);

    printf("Sorted array:   ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
