#include <stdio.h>
void recursive_bubblesort(int arr[], int size) {
    if (size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursive_bubblesort(arr, size - 1);
}

int main() {
    int len = 10;
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    recursive_bubblesort(arr, len);
    for (int j = 0; j < len; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}
