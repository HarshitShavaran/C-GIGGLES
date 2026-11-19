// wap to find the largest no. in the array using bubble sorting 
#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    int arr[10] = {30, 40, 25, 35, 45, 20, 30, 40, 25, 35};
    bubbleSort(arr, 10);
    printf("The largest number in the array is: %d\n", arr[9]);
    return 0;
}

//the time complexity is O(N^2)
//the space complexity is O(1)