//wap to reverse elements of an array without using another array
#include <stdio.h>
void reverseArray(int arr[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(arr, 10);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// O(N) is the time complexity
// O(1) is the space complexity