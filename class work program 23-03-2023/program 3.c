//C Program for finding the desired kth smallest element in an array.
#include <stdio.h>
int main() {
    int array[100], n, i, j, temp, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("The %dth smallest element is %d", k, array[k - 1]);
    return 0;
}

