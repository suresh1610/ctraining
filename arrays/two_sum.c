#include<stdio.h>
#include<stdlib.h>
int* addTwoSums(int* array, int size, int target_str, int* returnsize){
    int* result = (int*)malloc(2 * sizeof(int));
    *returnsize = 2;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if((array[i] + array[j]) == target_str){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}
int main(){
    int size;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    int element_size = size / sizeof(int);
    int* arr = (int*)malloc(element_size * sizeof(int));
    printf("Enter the elements in array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target number :\n");
    scanf("%d", &target);
    int returnsize;
    int* result = addTwoSums(arr, size, target, &returnsize);
    if(result != NULL ){
        printf("%d %d", result[0], result[1]);
    }
    free(result);
    return 0;
}