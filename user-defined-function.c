// C program to how use-defined function

#include<stdio.h>

int sum(int a, int b){ // Function Definition
    return a+b;
}

// Drive code
int main(){
    int a = 30, b = 40;

    int res = sum(a,b); // Function call
    printf("Sum is %d", res);
    return 0;
}
