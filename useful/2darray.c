//to define a 2d array in c we can use the following syntax
#include <stdio.h>

int main() {
    int arr[3][4]; // 3 rows and 4 columns
    return 0;
    //each element stays in its own cell in the 2d array, and we can access each element 
    // using its row and column indices. For example,
    // to assign a value to the element in the second row and third column, we can use:
    arr[1][2] = 3; // assigns the value 3 to the element

    //to enter values into the 2d array, we can use nested loops. For example:
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]); // assigns the sum of the row and column indices to each element
        }
        printf("\n");
    }
//wap toget user input for the 2d array and print it
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

