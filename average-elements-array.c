#include<stdio.h>

int main(){
    int arr[5]; // Declare a one-Dimensional array of size 5
    int sum = 0;
    float average;

    // Taking input for the array
    printf("Enter up to 5 integers : \n");
    for(int i=0; i<5; i++){
        printf("Element %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum
    }

    // Calculate the average
    average = sum/5.0; // Use 5.0 to get a float result

    // Display the average of elements
    printf("Average of element %d : %.2f\n", sum, average);

    return 0;
}
