// Use of Arithmetic Operators

#include<stdio.h>

int main()
{
    int a, b, add, sub, mul, div, rem;
    printf("Enter a, b values : ");
    scanf("%d%d", &a,&b); //Reading two values
    add=a+b; //Addition Operator
    sub=a-b; //Substraction Operator
    mul=a*b; //Multiplation Operator
    div=a/b; //Divison Operator
    rem=a%b; //Remainder Operator

    printf("Result of Addition = %d\n", add);
    printf("Result of Substration = %d\n", sub);
    printf("Result of Multiplicaton = %d\n", mul);
    printf("Result of Divison = %d\n", div);
    printf("Result of Remainder = %d\n", rem);

    return 0;
}
