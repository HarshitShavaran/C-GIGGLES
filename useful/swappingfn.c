//create a user defined fn to swap two elements of an array without pointer and without using * fn
#include <stdio.h>
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main(void) {
    int arr[10] = {30, 40, 25, 35, 45, 20, 30, 40, 25, 35}; 
    printf("Before swapping: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    swap(arr, 0, 1); 
    printf("After swapping: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]); 
    return 0;
}
