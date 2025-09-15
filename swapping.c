#include<stdio.h>
#include<conio.h>

void main() {
    int a = 5, b = 10;
    printf("Before swapping : a = %d, b = %d\n", a, b);
    a = a+b;
    b = a-b;
    printf("After swapping : a = %d; , b = %d\n", a, b);
    getch();
}
