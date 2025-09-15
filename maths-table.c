#include<stdio.h>

int main() {
    int n, b;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++) {
        b = n*i;
        printf("%d * %d = %d", n, i, b);
        printf("\n");
    }
    return 0;
}
