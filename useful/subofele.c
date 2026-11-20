//wap to find the diff b/w the sum of elements at even indices and the sum of elements at odd indices in an array
#include <stdio.h>
int main() 
{
    int n, i, even_sum = 0, odd_sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }
    int diff = even_sum - odd_sum;
    printf("The difference is: %d\n", diff);
    return 0;
}