#include <stdio.h>
//creating a fn name sum
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
int multi(int x,int y)
{
    int mul=x*y;
    return mul;
}
int main(void)
{
int x,y,z,v;

scanf ("%d %d", &x, &y);
z=sum(x,y);
printf("%d",z);
v=multi(x,y);
printf("\n%d",v);


}
