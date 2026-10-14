#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("hello world\n");
    //to get the output in new line we can use \n in printf statement
    // this sentex is used to print the statements in the output screen
    
    int a,b; //declaration (also can be written in different way like int a; int b; or int a=6,b=7;)

    //int----->to store whole numbers without decimal points

    a=6; //initialization

    b=7;

    printf("Age: %d\n", a);

    printf("hello world\n"); //to print statements

    // %d----->integer

    /*
    to print two or more variables in a single printf statement we can 
    use multiple format specifiers and separate them with commas. 
    */

    //using comma to seprate format secifiers will put comma in output statement

    printf("%d,%d\n", a,b);

    printf("%d,%d\n", a,b);

    puts("nom nom");

    /*
    puts can be alternative of printf if we want to avoide the use of \n
    and can be used with every form like string,int,float,double etc
    */

    printf("%d\n",a+b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a-b);

    /*. 
    we can oprate any arthmatic oprations on this by using (+,*,-,/)
    in case of division with 0 it will throw 0 to us  
    */

    //---------------------------------------------------------------------------------------------------------------------------

    /*write a program and take 4 intiger values in 4 variables and tell the avg of them
    */
    
    int q,w,e,r;
    q=2;
    w=3;
    e=4;
    r=5;
    
    printf("\nthe avg of no.s are: %d",(q+w+e+r)/4);

    //%f----->float

    float x,z;
    x=12;
    z=13;
    printf("\n%f",x);

    int y=x; //equating float with int will give us int and vise a versa
    printf("\n%d",y);

    //appling arthmetic operations on float values
    printf("\n%f",x+z);
    printf("\n%f",x-z);
    printf("\n%f",x*z);
    printf("\n%f",x/z);

    //volume of sphere is to be found with radius as some float value 

    float radius1=2.43286;
    float volume1=(4/3)*3.14*radius1*radius1*radius1;
    printf("\nthe volume of sphere is:%f",volume1);
    printf("\nthe volume of sphere is:%f",(4.0/3.0)*3.14*radius1*radius1*radius1);
    printf("\nthe volume of sphere is:%f",volume1); 
    //both will give same output

    //volume of cone is to be found with radius and height as some float value

    float radius2=2.43286;
    float height=3.43286;
    float volume2=(1.0/3.0)*3.14*radius2*radius2*height;
    printf("\nthe volume of cone is:%f",volume2); 
    //there is an alternate way too you can have a look at it in the above sphere volume calculation
    //both will give same output

    //--------------------------------------------------------------------------------------------------------------------

    //type casting is the process where we change data type like from int to float 
    // float n=3.37;
    // int m;
    // m=(int)n;
    // printf("\n%d", m);

    float n=3.37;
    float m;
    m=(int)n;
    printf("\n%f", m);

    //most imp (taking input from the user)
    //scanf is used to take input value from the user

    int ask;
    printf("\nenter a value you want:");
    scanf("%d",&ask);       //& stands for adress of
    printf("the value entered is:%d",ask);

    int ask1,ask2;
    printf("\nenter two values you want:");
    scanf("%d %d",&ask1,&ask2);       //& stands for adress
    printf("the values entered are:%d,%d",ask1,ask2);

    // take value of r from used and find area of circle 
    float r1;
    printf("\nenter the radius of circle:");
    scanf("%f",&r1);
    printf("the area of circle is:%f",3.14*r1*r1);
    //we can also declare a new variable to store the area of circle and then print it in printf statement

    //wap to find si by asking the user to enter p,r,t values and then find si
    float p,r2,t,si;
    printf("\nenter the value of p,r,t:");
    scanf("%f%f%f",&p,&r2,&t);
    printf("the SI for the given values is%f",(p*r2*t)/100);
    //we can also declare a new variable to store the si and then print it in printf statement

    si=(p*r2*t)/100;
    //the amount of the given si is:%f",si);

    //--------------------------------------------------------------------------------------------------------

    // we can use pow function to find the power of any number for that we have to include <math.h> header file in the program
    
    //wap to find volume of a hemisphere by taking radius as input from the user
    float radius3,volume3;
    printf("\nenter the radius of hemisphere:");
    scanf("%f",&radius3);
    volume3=(2.0/3.0)*3.14*radius3*radius3*radius3;
    printf("the volume of hemisphere is:%f",volume3);
    //an alternate way is to not declare a new variable and directly print the volume in printf statement
    //printf("the volume of hemisphere is:%f",(2.0/3.0)*3.14*radius3*radius3*radius3);

    //take a input from the user and get the fraction part of the number and print it in output screen
    float num;
    printf("\nenter a number:");
    scanf("%f",&num);
    printf("the fraction part is:%f",num-(int)num);
    //we are using typecasting here

    //using char for 1st time (char=character/alphabet)
    char chara;
    chara='a';
    printf("\n%c",chara);
    //%c----->character
    //if we put wrong format specifier like d or f it will throw aasci value of the character in output screen

    //the concept of precidence is used in c programming language like in mathematics its like BODMAS (brackets,of,division,multiplication,addition,subtraction)
    //in c programming language the precidence is like ()---->*,/---->+,-

    printf("\nthe ans for this is%d",2+3*4/2+2*(2/3)-12); 
    //the output will be -4 because the precidence is used here and the output will be calculated according to it

    //----------------------------------------------------------------------------------------------------------------------

    printf("\nthe ans for this is%f", 2/22*(3.14+2)*3/5+7*9/2);
    //the output will be 0 because the precidence is used here and the output will be calculated according to it

    //the variables in c are not dynamic they are static they cant change their values once they are declared 
    //to do the python kinda shit we need to create a new varible 

    short short1;
    short1=3776;
    printf("%d",short1);
    //short can store values from -32768 to 32767 if we go beyond this range it will throw garbage value in output screen
    
    double d1,d2;
    d1=3.14159265358979323846;
    printf("\n%lf",d1);
    //double can store values from -1.7E+308 to 1.7E+308 and it can store upto 15 decimal points
    //%lf----->double for scanf and %f----->double for printf

    //modulus operator is used to get the remainder of the division of two numbers
    int mod1,mod2;
    mod1=10;
    mod2=3;
    printf("\n%d",mod1%mod2);
    //if divident is smaller than divisor it will throw the divident as output and if both are equal it will throw 0 as output
    //in case of presidence the modulus operator has same precedence as multiplication and division
    
    //condition statements briooooooooo
    int age;
    printf("\nenter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\nu are eligible to vote");
    }
    else
    {
        printf("\nu are not eligible to vote");
    }
    //==----->equal to
    //!=----->not equal to
    //>----->greater than
    //<----->less than

    //wap to check whether the given number is even or odd
    int num1;
    printf("\nenter a number:");
    scanf("%d",&num1);
    if(num1%2==0)
    {
        printf("\nthe number is even");
    }
    else
    {
        printf("\nthe number is odd");
    }
    //wap to check the no. is divisable by 5 or not
    int num2;
    printf("\nenter a number:");
    scanf("%d",&num2);
    if(num2%5==0)
    {
        printf("\nthe number is divisable by 5");
    }
    else
    {
        printf("\nthe number is not divisable by 5");
    }
    //lld----->long long int
    // long long int l1,l2;
    // l1=1234567890123456789;
    // printf("\n%lld",l1);
    //for scanf we can use %lld for long long int and %llu for unsigned long long int

    //----------------------------------------------------------------------------------------------------------------------

    //wap to find divisiblity by 7
    int num3;
    printf("\nenter a number:");
    scanf("%d",&num3);
    if(num3%7==0)
    {
        printf("\nthe number is divisable by 7");
    }
    else
    {
        printf("\nthe number is not divisable by 7");
    }

    //wap to to check weather the year is leap or not
    int year;
    printf("\nenter a year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nthe year is a leap year");
    }
    else
    {
        printf("\nthe year is not a leap year");
    }
    
    //wap to take a number from user and tell its absolute value
    int num4;
    printf("\nenter a number:");
    scanf("%d",&num4);
    if(num4<0)
    {
        printf("\nthe absolute value is:%d",num4*(-1));
    }
    else
    {
        printf("\nthe absolute value is:%d",num4);
    }

    //truth tablea we use and,or,not operators in c programming language
    //and----->&&
    //or----->||
    //not------>!

    //wap to check whether the given number is divisible by 2 and 3 both or not
    int num5;
    printf("\nenter a number:");
    scanf("%d",&num5);
    if(num5%2==0 && num5%3==0)  
    {
        printf("\nthe number is divisable by 2 and 3");
    }
    else
    {
        printf("\nthe number is not divisable by 2 and 3");
    }

    //else  if statement is used when we have more than 2 conditions to check
    //wap to check whether the given number is positive,negative or zero
    int num6;
    printf("\nenter a number:");
    scanf("%d",&num6);
    if(num6>0)
    {
        printf("\nthe number is positive");
    }
    else if(num6<0)
    {
        printf("\nthe number is negative");
    }
    else
    {
        printf("\nthe number is zero");
    }

    //wap to check if area of a rectange is greater than its perimeter
    float arearectangle,length,width,perimeter;
    printf("\nenter the length and width of rectangle:");
    scanf("%f%f",&length,&width);
    arearectangle=length*width;
    perimeter=2*(length+width);

    if(arearectangle>perimeter)
    {
        printf("\nthe area of rectangle is greater than its perimeter");
    }

    else if(arearectangle<perimeter)
    {
        printf("\nthe area of rectangle is less than its perimeter");
    }
    
    else
    {
        printf("\nthe area of rectangle is equal to its perimeter");
    }
    //------------------------------------------------------------------------------------------------------------------------------

    //wap to check if the the no. is a 3 digit no. or not
    int num7;
    printf("\nenter a number:");
    scanf("%d",&num7);
    if(num7>=100 && num7<=999)
    {
        printf("\nthe no. is 3 digit no");
    }
    else
    {
        printf("\nthe no. is not 3 digit no");
    }
    
    //take cost price and selling price from user and tell whether the user is in profit or loss or no profit no loss and how much profit or loss he is in
    
    float costprice,sellingprice,profit,loss;
    printf("\nenter the cost price and selling price:");
    scanf("%f%f",&costprice,&sellingprice);
    if (sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        printf("\nthe user is in profit of:%f",profit);
    }
    else if(sellingprice<costprice)
    {
        loss=costprice-sellingprice;
        printf("\nthe user is in loss of:%f",loss);
    }
    else
    {
        printf("\nno profit no loss");
    }

    //take ages of 3 people and tell which one is the youngest amoung all and also mention there names
    int age1,age2,age3;
    char name1[20],name2[20],name3[20];

    printf("\nenter the name and age of first person:");
    scanf("%s%d",name1,&age1);
    printf("\nenter the name and age of second person:");
    scanf("%s%d",name2,&age2);
    printf("\nenter the name and age of third person:");
    scanf("%s%d",name3,&age3);

    if(age1<age2 && age1<age3)
    {
        printf("\n%s is the youngest",name1);
    }
    else if(age2<age1 && age2<age3)
    {
        printf("\n%s is the youngest",name2);
    }
    else if(age3<age1 && age3<age2)
    {
        printf("\n%s is the youngest",name3);
    }
    else
    {
        printf("ages are colliding check that manually");
    }
    
    //concept of nested if-else conditions
    int num8=123;
    if (num8>0)
    {
        if (num8%2==0)
        {
            printf("the no. is positive and even");
        }
        else
        {
            printf("the no. is positive and odd");
        }

    }
    else
    {
        printf("the no. is negitive");
    }

    //wap to check if the no. is postive or negitive if positive check it is divisible by 5
    int num9;
    printf("\nenter the no. to be cheked");
    scanf("%d",&num9);

    if (num9>0)
    {
        if (num9%2==0)
        {
            printf("the no. is positive and even");
        }
        else
        {
            printf("the no. is positive and odd");
        }

    }
    else
    {
        printf("the no. is negitive");
    }
    //take a no. and give its absolute value and also tell if its odd or even also consider the no. is positive or negitive and print all the statements in output screen
    int num10;
    printf("\nenter the no. to be cheked");
    scanf("%d",&num10);
    if (num10>0)
    {
        if (num10%2==0)
        {
            printf("the no. is positive and even and its absolute value is:%d",num10);
        }
        else
        {
            printf("the no. is positive and odd and its absolute value is:%d",num10);
        }

    }
    else
    {
        if (num10%2==0)
        {
            printf("the no. is negitive and even and its absolute value is:%d",num10*(-1));
        }
        else
        {
            printf("the no. is negitive and odd and its absolute value is:%d",num10*(-1));
        }

    }
    //--------------------------------------------------------------------------------------------------------------

    
    //make a calculator without using loops just using if else statements and take input from user and give output to user
    int choice;
    float num11,num12,result;
    printf("\nenter the first number:");
    scanf("%f",&num11);
    printf("\nenter the second number:");
    scanf("%f",&num12);
    printf("\nenter the choice of operation:\n1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=num11+num12;
        printf("the result is:%f",result);
    }
    else if (choice==2)
    {
        result=num11-num12;
        printf("the result is:%f",result);
    }
    else if (choice==3)
    {
        result=num11*num12;
        printf("the result is:%f",result);
    }
    
    else if (choice==4)
    {
        result=num11/num12;
        printf("the result is:%f",result);
    }
    else
    {
        printf("invalid choice");
    }

    //check the divisiblity of a number by 2,3,5,7 and print the result in output screen
    int num13;
    printf("\nenter the no. to be cheked");
    scanf("%d",&num13);
    if (num13%2==0)
    {
        printf("the no. is divisable by 2\n");
    }
    else
    {
        printf("the no. is not divisable by 2\n");
    }
    if (num13%3==0)
    {
        printf("the no. is divisable by 3\n");
    }
    else
    {
        printf("the no. is not divisable by 3\n");
    }
    if (num13%5==0)
    {
        printf("the no. is divisable by 5\n");
    }
    else
    {
        printf("the no. is not divisable by 5\n");
    }
    if (num13%7==0)
    {
        printf("the no. is divisable by 7\n");
    }
    else
    {
        printf("the no. is not divisable by 7\n");
    }   

    //loops in c programming language are used to repeat a block of code multiple times until a certain condition is met
    for (int i = 0; i < 50; i++)
    {
        printf("\nhello world");
    }

    // wap to print ap starts with one and ends at 50 and common diff should be 3
    for (int s=1;s<51;s=s+3)
    {
        printf("%d,",s);
    }
    // wap to print ap starts with one and ends at 1000 and common diff should be 11
    for (int s=1;s<1001;s=s+11)
    {
        printf("%d,",s);
    }

    //while loop is used to repeat a block of code multiple times until a certain condition is met
    int i=1;
    while (i<51)
    {
        printf("%d,",i);
        i++;
    }
    int j=1;
    while (j<1001)
    {
        printf("%d,",j);
        j=j+11;
    }
// do-while loop is used to repeat a block of code multiple times until a certain condition is met
    int k=1;
    do
    {
        printf("%d,",k);
        k++;
    } 
    while (k<51);
    int l=1;
    do
    {
        printf("%d,",l);
        l=l+11;
    } while (l<1001);



}