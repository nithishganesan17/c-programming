#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int duplicate[n];

    printf("Duplicate elements in the array are: ");
    int count = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                duplicate[count++] = arr[i];
                break;
            }
        }
    }
    printf("\nNon-duplicate elements in the array are: ");
    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < count; j++) {
            if (arr[i] == duplicate[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

