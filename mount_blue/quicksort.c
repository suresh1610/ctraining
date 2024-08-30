#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* quicksort(int n, int* arr, int *result_count){
    int count = 0;

    while(arr[count] != '\0'){
        count++;
    }

    *result_count = count;

    int* result = (int*)malloc(*result_count * sizeof(int));

    // int* equal = (int*)malloc(*);

    for(int i = 0; i < *result_count; i++){
        result[i] = arr[i];
    }

    return result;
}
int main(){
    int size;
    scanf("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int result_count;
    int* result = quicksort(size, arr, &result_count);

    printf("%d\n", result_count);

    for(int i = 0; i < result_count; i++){
        printf("%d", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}
