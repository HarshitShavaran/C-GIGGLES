//wap to transpose an 2d array
#include <stdio.h>
int main() {
    int rows, cols;
    // Get dimensions from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    // Declare arrays dynamically based on user input
    int matrix[rows][cols];
    int transpose[cols][rows];
    // Take matrix elements as input
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Transpose and print in the same loop
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

