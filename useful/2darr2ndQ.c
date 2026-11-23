//wap to generate 3x4 matrix with taking input from user and print it
#include <stdio.h>
int main() {
    int matrix[3][4];
    int i, j;
    //taking input from user
    printf("enter the values;\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    //printing the matrix
    printf("the matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}