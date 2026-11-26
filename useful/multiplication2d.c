//multiply two 2d arrays
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }
    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) scanf("%d", &B[i][j]);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Dot product calculation
            }
        }
    }
    printf("\nResultant Matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d\t", C[i][j]);
        printf("\n");
    }
    return 0;
}
