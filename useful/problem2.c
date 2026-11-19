//wap to to change the off index value to the 2nd multile and even indexes should be incrimented by 10
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) { 
            arr[i] *= 2; 
        } else { 
            arr[i] += 10; 
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}