#include<stdio.h>

int main(){
    int rows = 2, columns = 2;
    int matrixOne[2][2], matrixTwo[2][2], sum[2][2];

    // Taking input for the first matrix
    printf("The elements of the first matrix\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter elements at position [%d][%d]: ", i,j);
            scanf("%d", &matrixOne[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("\nThe elements of the second matrix\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter elements at position [%d][%d]: ", i,j);
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    // Calculating the sum of the two matrices
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            sum[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }

    // Displaying the result
    printf("\nThe sum of matrices is : \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
