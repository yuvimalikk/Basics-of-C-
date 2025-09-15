#include<stdio.h>

// Function to sort the array in ascending order using Bubble Sort
void bubbleSort(int arr[], int n){
    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){

                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Now enter any %d elements : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

// Sorting the array in ascending order
bubbleSort(arr, n);

// Printing the sorted array
printf("Sorted array in ascending order : ");
for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
}
printf("\n");

return 0;
}
