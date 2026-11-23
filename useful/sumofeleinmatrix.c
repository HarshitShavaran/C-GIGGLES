//wap to find sum of elements in a matrix
#include <stdio.h>
int main() {
    int r, c;
    int sum = 0;
    // input matrix dimensions
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    // input matrix elements
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add each element to sum as it is entered
        }
    }
    // print the final sum
    printf("\nsum of all elements in the matrix = %d\n", sum);
    return 0;
}
