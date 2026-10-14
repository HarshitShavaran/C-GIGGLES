#include <stdio.h>
#include <math.h>
int main(void)
{
    //wap to write multiplication table of a number in reverse order using for loop
    int num16;
    printf("\nenter the no. to print its multiplication table:");
    scanf("%d",&num16);
    printf("\nusing for loop:\n");
    for (int n=10;n>0;n=n-1)
    {
        printf("%d x %d = %d\n",num16,n,num16*n);
    }
    //wap to write multiplication table using while loop
    int num17;
    printf("\nenter the no. to print its multiplication table:");
    scanf("%d",&num17);
    printf("\nusing while loop:\n");
    int n=10;
    while (n>0)
    {
        printf("%d x %d = %d\n",num17,n,num17*n);
        n--;
    }
    //wap to write multiplication table using do-while loop
    int num18;
    printf("\nenter the no. to print its multiplication table:");
    scanf("%d",&num18);
    printf("\nusing do-while loop:\n");
    n=10;
    do
    {
        printf("%d x %d = %d\n",num18,n,num18*n);
        n--;
    }

    while (n>0);

    //wap to find sum of first n natural numbers using for loop
    int num19,sum=0;
    printf("\nenter the no. to find sum of first n natural numbers:");
    scanf("%d",&num19);
    for (int n=1;n<=num19;n++)
    {
        sum=sum+n;
        
    }    
    printf("sum of first %d natural numbers is %d\n",num19,sum);
    //wap to check if the no. is amstrong or not using for loop
    int num20,rem,rev=0,temp;
    printf("\nenter the no. to check if it is amstrong or not:");
    scanf("%d",&num20);
    temp=num20;
    for (int n=num20;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev+rem*rem*rem;
    }
    if (rev==num20)
    {
        printf("%d is an amstrong number\n",num20);
    }
    else
    {
        printf("%d is not an amstrong number\n",num20);
    }

    //wap to get factorial of given no.
    int num21,fact=1;
    printf("\nenter the no. to find its factorial:");
    scanf("%d",&num21);
    for (int n=num21;n>0;n--)
    {
        fact=fact*n;
    }
    printf("the factorial of %d is %d\n",num21,fact);

    //wap to check the count of numbers that apper b/w 1-1000 which are divisible by 3
    int count=0;
    for (int n=1;n<=1000;n++)
    {
        if (n%3==0)
        {
            count++;
        }
    }
    printf("the count of numbers that are divisible by 3 b/w 1-1000 is %d\n",count);

    //wap to check the sum of num b/w 1-1000 which are divisible by 3 and 7 and also give the count of such numbers
    int sum1=0,count1=0;
    for (int n=1;n<=1000;n++)
    {
        if (n%3==0 && n%7==0)
        {
            sum1=sum1+n;
            count1++;
        }
    }
    printf("sum of numbers divisible by 3 and 7: %d, count: %d\n", sum1, count1);

    //wap to check the sum of first 10 numbers which are divisible by 3,5,7 in range 1-10000
    int sum2=0,count2=0;
    for (int n=1;n<=10000;n++)
    {
        if (n%3==0 && n%5==0 && n%7==0)
        {
            sum2=sum2+n;
            count2++;
            if (count2==10)
            {
                break;
            }
        }
    }
    printf("sum of first 10 numbers divisible by 3,5,7 in range 1-10000 is %d\n", sum2);

    //wap to take no. from the user and write the sum of its digits and also tell how many digits are there in the given no.
    int num22,rem1,sum3=0,count3=0;
    printf("\nenter the no. to find sum of its digits and count of digits:");
    scanf("%d",&num22);
    for (int n=num22;n>0;n=n/10)
    {
        rem1=n%10;
        sum3=sum3+rem1;
        count3++;
    }
    printf("sum of digits of %d is %d and it has %d digits\n", num22, sum3, count3);

    //wap to print febbonacci series up to n terms
    int num23,a=1,b=1,c; //can also be initialized as a=0,b=1,c;
    printf("\nenter the no. of terms to print febbonacci series:");
    scanf("%d",&num23);
    for (int n=1;n<=num23;n++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }


}



