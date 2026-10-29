#include <stdio.h>
int main (void)
{

// wap to print the following pattern
// *
// **
// ***
// ****
// *****

    for (int i=1;i<=5;i++)
        {
            for (int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }

    // wap to print the following pattern
    // *****
    for (int i=1;i<=5;i++)
        {
            printf("*\n");
        }
    // wap to print the following pattern
    //n x n grid of stars

    int n;
    printf("\nenter the no. of rows and columns for n x n grid of stars:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++)
            {
                printf(" * ");
            }
        printf("\n");
        }    

    // wap to print the following pattern
    //    *
    //   **
    //  ***
    // ****
    //*****
    for (int i=1;i<=5;i++)
        {
            for (int j=1;j<=5;j++)
            {
                if (j<=5-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    
    /*wap to print the following pattern
    *****
    *   *
    *   *
    *****
    */
   for(int i=1;i<=5;i++)
   {
        for (int j=1;j<=5;j++)
        {
            if (i==1 || i==5 || j==1 || j==5)
             {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }
   printf("\n");
   /*wap to print the following pattern
            *
            *
        * * * * *
            * 
            * 
    */

    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (i==3 || j==3)
             {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    //we can also make it dynamic by using the formula (n+1)/2

    /*wap to print the following pattern
            *
           * *
          * * *
         * * * *
        * * * * *
    */
   for(int i=1;i<=5;i++)
   {
        for (int j=1;j<=5;j++)
        {
            if (j>=6-i)
             {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }

   /*wap to print the following pattern
    *****
    ****
    ***
    **
    *
    */
   for(int i=5;i>=1;i--)
   {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
}

//wap to print the following pattern
//        *
//      *
//* * * * *
//  *
//*
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (i==3 || j==6-i)
             {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n\n");
    }
    /*wap a program to print a specific pattern
    1
    1 3
    1 3 5
    1 3 5 7
    1 3 5 7 9
    */
   for(int i=1;i<=5;i++)
   {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",2*j-1);
        }
        printf("\n");
   }

   //


}