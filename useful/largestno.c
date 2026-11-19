// wap to find the largest no. in the array 
#include <stdio.h>
int main(void)
{
    int arr[10] = {30, 40, 25, 35, 45, 20, 30, 40, 25, 35};
    int largest = arr[0];
    for(int i = 1; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n", largest);
    return 0;
}