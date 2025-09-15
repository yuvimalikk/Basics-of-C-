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
    }

    // Displaying the array in reverse order
    printf("\nArray in reverse order\n");
    for(int i=4; i>=0; i--){
        printf("%d  ", arr[i]);
    }

    return 0;
}
