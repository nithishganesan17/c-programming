#include <stdio.h>
int i;
int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[100], n, x, pos;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &x);
    
    pos = binarySearch(arr, n, x);
    
    if (pos != -1) {
        printf("Given element %d is found at %dth position\n", x, pos+1);
    } else {
        printf("Given element %d is not found in the array\n", x);
    }
    
    return 0;
}

