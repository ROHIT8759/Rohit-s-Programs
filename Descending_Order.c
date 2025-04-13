#include <stdbool.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int n;
	printf("Enter how many numbers you want to compare:");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr, n);
	printf("Numbers in descending order: \n");
	printArray(arr, n);
	return 0;
}