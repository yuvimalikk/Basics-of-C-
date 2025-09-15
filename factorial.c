#include<stdio.h>

unsigned int factorial(unsigned int N){
    int unsigned fact = 1;
    for(unsigned int i = 1; i <= N; i++){
    fact*=i;
    }
    return fact;
}

// OR

unsigned int factorial(unsigned int N) {
    int fact = 1,i;
    for(i = 1; i <= N; i++){
        fact*=i;
    }
    return fact;
}

int main() {
    int N = 5;
    printf("Enter a number to find it's factorial : ");
    scanf("%d", &N);
    int fact = factorial(N);
    printf("Factorial of '%d' is %d", N, fact);
    return 0;
}
