//15. Write a program for Binary Search using recursive functions
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target);

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int index = binarySearch(arr, 0, n - 1, target);

    if (index == -1) {
        printf("Target %d is not found in the array\n", target);
    } else {
        printf("Target %d is found at index %d\n", target, index);
    }

    return 0;
}

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;  // target not found in array
    }

    int mid = (low + high) / 2;  // calculate middle index

    if (arr[mid] == target) {
        return mid;  // target found at middle index
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);  // search left half
    } else {
        return binarySearch(arr, mid + 1, high, target);  // search right half
    }
}

