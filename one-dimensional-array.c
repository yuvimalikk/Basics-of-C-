#include<stdio.h>

int main(){
    int arr[5]; // Declare a one-Dimensional array of size 5
    int sum = 0;
    int i;

    // Taking input for the array
    printf("Enter 5 intergers\n");
    for(i=0; i<5; i++){
        printf("Element %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum
    }

    // Display the sum of elements
    printf("Sum of elements : %d\n", sum);

    return 0;
}
