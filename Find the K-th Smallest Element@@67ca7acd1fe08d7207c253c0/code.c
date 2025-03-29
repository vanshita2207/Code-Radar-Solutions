#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find k-th smallest element
int kthSmallest(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return -1; // Error handling
    }

    qsort(arr, n, sizeof(int), compare);  // Sort array
    return arr[k - 1];  // Return k-th smallest element
}