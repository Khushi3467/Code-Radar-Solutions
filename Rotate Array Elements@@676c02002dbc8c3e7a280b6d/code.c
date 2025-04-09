#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle k > n
    int temp[k];

    // Store first k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy back temp to end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateArray(arr, n, k);

    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
