//wap to make a calculator using user defined functions
#include <stdio.h>
//creating a fn name sum
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
//creating a fn name sub
int sub(int a,int b)
{
    int sub=a-b;
    return sub;
}
//creating a fn name multi
int multi(int x,int y)
{
    int mul=x*y;
    return mul;
}
//creating a fn name div
int div(int x,int y)
{
    int div=x/y;
    return div;
}
//we have to take what opration has to be done by user with using char oprator and if else statement


int main(void)
{
    int x,y,z,v;
    char opr;
    printf("Enter two numbers: ");
    scanf ("%d %d", &x, &y);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &opr); // Added space before %c to consume any leftover
    if (opr == '+') {
        z=sum(x,y);
        printf("Result: %d\n",z);
    } else if (opr == '-') {
        z=sub(x,y);
        printf("Result: %d\n",z);
    } else if (opr == '*') {
        v=multi(x,y);
        printf("Result: %d\n",v);
    } else if (opr == '/') {
        if (y != 0) {
            v=div(x,y);
            printf("Result: %d\n",v);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operation.\n");
    }
}