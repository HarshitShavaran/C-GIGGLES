//wap to check if the array is palindrome or not
#include <stdio.h>
int main()
{
    int arr[100], n, i, stop = 0;
    printf("number of elements in the arr: ");
    scanf("%d", &n);
    printf("elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            stop = 1;
            break;
        }
    }
    if (stop == 0)
    {
        printf("The arr is a palindrome.\n");
    }
    else
    {
        printf("The arr is not a palindrome.\n");
    }
    return 0;
}