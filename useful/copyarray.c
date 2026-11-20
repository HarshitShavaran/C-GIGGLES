//wap to copy the elements of one array to another array but in reverse order
#include <stdio.h>
void copyArrayReverse(int source[], int des[], int size)
{
    for(int i = 0; i < size; i++)
    {
        des[i] = source[size - 1 - i];
    }
}
int main(void)
{
    int source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int des[10];
    copyArrayReverse(source, des, 10);
    printf("The elements of the destination array in reverse order are:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", des[i]);
    }
    printf("\n");
    return 0;

}