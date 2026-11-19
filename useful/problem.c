//wap to find the 2nd highest no. in the array
#include<stdio.h>
int main()
{
    int a[100],i,n,first,second;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first=second=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }
    if(second==-1)
    {
        printf("There is no second highest number in the array.\n");
    }
    else
    {
        printf("The second highest number in the array is: %d\n",second);
    }
    return 0;
}