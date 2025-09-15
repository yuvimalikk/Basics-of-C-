// C program to implement the Library function.

#include<stdio.h>  
#include<conio.h>
#include<math.h>

// Drive code
int main(){
    double Number;
    Number = 49;

    // Computing the square root with the help of predefined C Library function
    double squareRoot = sqrt(Number);
    printf("The Square root of %.2lf = %.2lf", Number, squareRoot);
    return 0;
}
