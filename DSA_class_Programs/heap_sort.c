#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

// Structure for the max heap
typedef struct {
    int items[MAX_HEAP_SIZE];
    int size;
} MaxHeap;

// Function to swap two elements in the heap
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to maintain the max heap property after inserting an element
void heapifyUp(MaxHeap* heap, int index) {
    while (index > 0 && heap->items[(index - 1) / 2] < heap->items[index]) {
        swap(&heap->items[(index - 1) / 2], &heap->items[index]);
        index = (index - 1) / 2;
    }
}

// Function to maintain the max heap property after removing the root
void heapifyDown(MaxHeap* heap, int index) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heap->size && heap->items[leftChild] > heap->items[largest])
        largest = leftChild;
    if (rightChild < heap->size && heap->items[rightChild] > heap->items[largest])
        largest = rightChild;

    if (largest != index) {
        swap(&heap->items[index], &heap->items[largest]);
        heapifyDown(heap, largest);
    }
}

// Function to insert an element into the heap
void insert(MaxHeap* heap, int value) {
    if (heap->size >= MAX_HEAP_SIZE) {
        printf("Heap is full. Cannot insert.\n");
        return;
    }
    heap->items[heap->size] = value;
    heap->size++;
    heapifyUp(heap, heap->size - 1);
}

// Function to delete the root (maximum value) from the heap
int deleteMax(MaxHeap* heap) {
    if (heap->size == 0) {
        printf("Heap is empty. Cannot delete.\n");
        return -1;
    }
    int deletedItem = heap->items[0];
    heap->items[0] = heap->items[heap->size - 1];
    heap->size--;
    heapifyDown(heap, 0);
    return deletedItem;
}

// Function to perform heap sort
void heapSort(int arr[], int n) {
    MaxHeap heap;
    heap.size = 0;

    // Inserting elements into the max heap
    for (int i = 0; i < n; i++) {
        insert(&heap, arr[i]);
    }

    // Deleting elements from the max heap and storing them in sorted order
    for (int i = n - 1; i >= 0; i--) {
        arr[i] = deleteMax(&heap);
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Performing heap sort
    heapSort(arr, n);

    // Displaying sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
