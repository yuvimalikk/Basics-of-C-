#include<stdio.h>

int main(){

    // Reserve space to store 90 integers
    int num[5];
    num[0] = 97;
    num[1] = 98;
    num[2] = 89;

    printf("Num One : %d, Num Two : %d, Num Three : %d", num[0], num[1], num[2]);



    // Input and Output in an array
    int marks[5];

    printf("\nEnter marks of 5 students : ");
    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    
    printf("\nMarks entered are : %d, %d, %d, %d, %d", marks[0], marks[1], marks[2], marks[3], marks[4]);




    // Input and Output using loops in array
    int score[5];
    int i;

    printf("\nEnter scores of 5 students : ");
    for(int i=0; i<5; i++){
        scanf("%d", &score[i]);
        printf("\n%d Score enterd are : %d", i, score[i]);
    }



    // Initialization of an array
    int cgpa[5] = {9 ,8 , 4, 10, 9};
    int j;

    printf("\n");
    for(int j=0; j<5; j++){
        printf("\nThe values in 'cgpa' array at index[%d] is : %d", j, cgpa[j]);
    }
    


    // Arrays in Memory (It's Depend on how much bytes it store differents datatype on a computer in which we are running that program)
    int arr[10];
    int k;

    printf("\nEnter upto 10 Numbers : ");
    for(int k=0; k<10; k++){
        scanf("%d", &arr[k]);
        printf("\nAddress of value at index[%d] is : %u", k, &arr[k]);
    }
    return 0;
}
