#include<stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i; // It return the index, if the key is found
        }
    }
    return -1; // It return -1, if the key is not found
}

int main(){
    int n;
    int key;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Now enter any %d elements : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements to search : ");
    scanf("%d", &key);

    // Perform Linear Search
    int result = linearSearch(arr, n, key);

    if(result != -1){
        printf("Element %d found at index %d\n", key, result);
    }
    else{
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
