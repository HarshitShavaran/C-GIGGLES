//wap to find the sum of two matricies
#include <stdio.h>
int main() {
    // define dimensions and initialize the two given matrices
    int r = 2, c = 2;
    int a[2][2] = {
        {1, 2},
        {4, 5}
    };
    int b[2][2] = {
        {7, 8},
        {10, 11}
    };
    int sum[2][2];
    // add corresponding elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // output
    printf("Sum of the two given matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
