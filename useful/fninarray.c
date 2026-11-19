//in arrays pass the refrence works and in other data types pass by value works. In arrays we can pass the refrence of the array to the function and it will work fine. But in other data types we need to pass the value of the variable to the function.
//swap the values of two variables using pointers
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//swap the arrays using pointers
void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
//swap arrays without using pointers
void swapArraysWithoutPointers(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    // swap the arrays using pointers
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("\nBefore swapping arrays:\n");
    for (int i = 0; i < size; i++) printf("%d ", arr1[i]);
    printf("\n");
    for (int i = 0; i < size; i++) printf("%d ", arr2[i]);
    printf("\n");

    swapArrays(arr1, arr2, size);

    printf("After swapping arrays:\n");
    for (int i = 0; i < size; i++) printf("%d ", arr1[i]);
    printf("\n");
    for (int i = 0; i < size; i++) printf("%d ", arr2[i]);
    printf("\n");

    // swap arrays without using pointers
    int arr3[] = {11, 12, 13, 14, 15};
    int arr4[] = {16, 17, 18, 19, 20};
    printf("\nBefore swapping arrays without pointers:\n");
    for (int i = 0; i < size; i++) printf("%d ", arr3[i]);
    printf("\n");
    for (int i = 0; i < size; i++) printf("%d ", arr4[i]);
    printf("\n");

    swapArraysWithoutPointers(arr3, arr4, size);

    printf("After swapping arrays without pointers:\n");
    for (int i = 0; i < size; i++) printf("%d ", arr3[i]);
    printf("\n");
    for (int i = 0; i < size; i++) printf("%d ", arr4[i]);
    printf("\n");

    return 0;
}
