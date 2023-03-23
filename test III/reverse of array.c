#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array of elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReverse Array Elements : ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

