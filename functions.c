#include <stdio.h>
// The above line includes the standard input-output library in C,
//which allows the program to use functions like printf() and scanf() for input and output operations.
void greet()//function declaration
{
    // The greet function is defined here, which takes no parameters and returns no value.
    // It is used to print a greeting message to the console.
    printf("Hello, welcome to the program!\n");
    return; // This line indicates the end of the greet function and returns control to the calling function.
}
void printPattern()//function declaration
{
    // The printPattern function is defined here, which takes no parameters and returns no value.
    // It is used to print a specific pattern to the console.
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return; // This line indicates the end of the printPattern function and returns control to the calling function.
}
void india()
{
    printf("you from india?");
    india();
    return;

}

//function prototype
//this technique is used in user defined code so if you declare any code in the main function 
//you can just write name here and the function will be called automatically

//here we create a user defined function called main, which is the entry point of the program.
//The return type of the main function is int,
//which indicates that it returns an integer value to the operating system upon completion.
//The void keyword in the parentheses indicates that the main function does not take any parameters.
int main (void)
{
    //int main (void) is used to define the main function in C, which is the entry point of the program.
    // The 'void' indicates that the function does not take any parameters.
    //void is a keyword in C that indicates that the function does not return any value.
    greet(); // This line calls the greet function, which prints a greeting message to the console.
   // This line returns an integer value to the operating system.
    printPattern(); // This line calls the printPattern function, which prints a specific pattern to the console.
     

    //functions cant be defined inside other functions in C.
    india();
    return 0;
    
}
