#include <stdio.h>
int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1; 
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}
int main() {
    int arr[] = {3, 5, 2, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = linearSearch(arr, size, target, 0);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}
