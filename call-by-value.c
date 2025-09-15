// C program to show use of Call-by-Value

#include<stdio.h>

void swap(int var1, int var2){
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

// Drive Code
int main(){

    // var1 & var2 are passed by value(a copy of the values is made), any changes made to var1 and var2 inside this function will not affect the original variable in main.
    int var1 = 3;
    int var2 = 2;

    printf("Before swapping value of var 1 = %d and var 2 = %d\n", var1, var2);
    swap(var1, var2);
    printf("After swapping value of var 1 = %d and var 2 = %d", var1, var2);
    return 0;
}
