//19.	Find out the error and show the output
#include <stdio.h>

int main() {
    int arr[3][4];
    int i, j;

    printf("Enter array elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

