//wap to find HCF of two numbers using if else and for loop and make this a user defined function
#include <stdio.h>
//creating a fn name hcf
int hcf(int a,int b)
{
    int i,hcf;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int main(void)
{
    int x,y,z;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    z=hcf(x,y);
    printf("HCF of %d and %d is: %d\n",x,y,z);
    return 0;
}