// C program to show use of Call by Reference

#include<stdio.h>

void swap(int*var1, int*var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

// Drive Code
int main(){
    int var1 = 3;
    int var2 = 2;

    printf("Before swapping the value of var 1 = %d and var 2 = %d\n",var1, var2);
    swap(&var1, &var2);
    printf("After swapping the value of var 1 = %d and var 2 = %d", var1, var2);
    return 0;
}
