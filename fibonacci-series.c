#include<stdio.h>

int main(){
    int first = 0, second = 1, next;
    
    printf("Fibonacci series upto 100 is \n");
    while(first <= 100){

        printf("%d", first);

        // For calculating the next number.
        next = first+second;
        second = next;
        return 0;
    }
}
