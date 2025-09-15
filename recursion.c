// Program to can calculate the factional using recursion in C

#include<stdio.h>

// Recursion function to calculate factorial
int factorial(int n){

    // Base case : when n becomes 0, the factorial becomes 1
    if(n==0){
        return 1;
    }

    // Recursive case : multiply n with factorial of (n-1)
    return n*factorial(n-1);
}

// Drive Code
int main(){
    int number;
    printf("Enter a positive integer : ");
    scanf("%d", &number);

    // Checking for valid input
    if (number<0){
        printf("Factorial of a negative number is not defined \n");
    }

    else{
        int result = factorial(number); // Calculating the factorial
        printf("Factorial of %d is : %d \n", number, result);
    }
    return 0;
}
