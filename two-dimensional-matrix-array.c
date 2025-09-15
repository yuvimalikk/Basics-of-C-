#include<stdio.h>

int main(){
    int rows = 2, columns = 3; // Declare a one-Dimensional array of size 5
    int matrix[2][3];

    // Taking input for the array
    printf("Enter elements of the Matrix\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter elements at position [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying the matrix
    for(int i=0; i<rows; i++){
        printf("| ");
        for(int j=0; j<columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
