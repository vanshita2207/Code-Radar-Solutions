#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find k-th smallest element
int kthSmallest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare);  // Sort array
    return arr[k - 1];  // Return k-th smallest element
}