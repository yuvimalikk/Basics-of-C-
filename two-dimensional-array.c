#include<stdio.h>

int main(){
    int arr[5]; // Declare a one-Dimensional array of size 5
    int sum = 0;
    int largest;

    // Taking input for the array
    printf("Enter 5 intergers\n");
    for(int i=0; i<5; i++){
        printf("Elements %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum
    }

    // Initialize largest with the first element
    largest = arr[0];

    // Find the largest element
    for(int i=1; i<5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    // Display the largest elements
    printf("Largest elements : %d\n", largest);

    // Display the sum of elements
    printf("Sum of elements : %d\n", sum);

    return 0;
}
