#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void getuserinput(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("Enter the elements: ");
        scanf("%d", &array[i]);
        if(array[i] < 0){
            printf("Invalid Number");
            exit(1);
        }
    }
}
void printOutput(int arr1[], int arr2[], int size1, int size2){
    bool found = false;
    for(int i = 0; i< size1; i++){
        for(int j = 0; j < size2; i++){
            if( arr1[i] == arr2[j]){
                found = true;
                break;
            }
        }
        if(!found){
            printf("%d", arr1[i]);
        }
    }
}
int main(){
    // int* n1_array; 
    // int* n2_array;
    int n1_size, n2_size;
    scanf("%d", &n1_size);
    int* n1_array = (int*)malloc( n1_size * sizeof(int));
    getuserinput(n1_array, n1_size);
    scanf("%d", &n2_size);
    int* n2_array = (int*)malloc(n2_size * sizeof(int));
    getuserinput(n2_array, n2_size);
    printOutput(n1_array, n2_array, n1_size, n2_size);
    return 0;
}