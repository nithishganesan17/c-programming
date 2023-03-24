//14. Write a program for matrix multiplication?
#include <stdio.h>
int main() {
    int m1, n1, m2, n2, i, j, k;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the elements of first matrix:\n");
    for(i=0; i<m1; i++) {
        for(j=0; j<n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);
    printf("Enter the elements of second matrix:\n");
    for(i=0; i<m2; i++) {
        for(j=0; j<n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if(n1 != m2) {
        printf("Multiplication of matrices is not possible.\n");
    } else {
        for(i=0; i<m1; i++) {
            for(j=0; j<n2; j++) {
                C[i][j] = 0;
                for(k=0; k<n1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Resultant matrix:\n");
        for(i=0; i<m1; i++) {
            for(j=0; j<n2; j++) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
