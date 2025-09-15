#include<stdio.h>

int main(){
    int rows = 5;

    // First loop for printing rows
    for(int i=0; i<rows; i++){

        // Second loop for printing charaters in each rows
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

printf("\n");

    // Second loop for printing the rows
    for(int i=0; i<rows; i++){

        // Loop for printing +"+" charater
        for(int j=0; j<2*(rows-i)-i; j++){
            printf("+");
        }

        // Loop for printing "@" charater
        for(int k=0; k<=i; k++){
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
