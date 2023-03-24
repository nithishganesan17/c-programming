//8. What will be the output of the program if the array begins 1200 in memory?
#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 1, 6},i;
    printf("Array address: %p\n", arr);
    for (i = 0; i < 5; i++) {
        printf("Element %d address: %p\n", i, &arr[i]);
    }

    return 0;
}

