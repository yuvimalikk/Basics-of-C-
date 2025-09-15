#include<stdio.h>

int sum(int arr[]); // Passing array as Function - datatype function_name(arr[], b)

int main(){
    int arr[5] = {10, 15, 90, 25, 70};
    int s;
    s = sum(arr); 
    printf("The sum of the array elements is : %d", s);
    return 0;
}

int sum(int arr[]){
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    return sum;
}
