#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp[k];

    // Store first k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Put back the stored elements at the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {};  // Add elements here
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Rotate by 2 positions

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateArray(arr, n, k);

  
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
