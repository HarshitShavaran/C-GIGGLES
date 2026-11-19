//wap to find the makrs less than 30 using array and make this a user defined function the array us alredy given which is {30, 40, 25, 35, 45, 20, 30, 40, 25, 35}
#include <stdio.h>

void printLowMarks(int arr[], int size)
{
    int i;
    printf("Marks less than 35 are: ");
    for(i = 0; i < size; i++)
    {
        if(arr[i] < 30)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main(void)
{
    int marks[10] = {30, 40, 25, 35, 45, 20, 30, 40, 25, 35};
    printLowMarks(marks, 10); 
    return 0;

    //also find the sum of all the marks in the array and print it
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += marks[i];
    }
    printf("\nSum of all marks: %d", sum);
}


