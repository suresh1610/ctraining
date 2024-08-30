#include<stdio.h>
#include<stdlib.h>

int pair(int* arr, int count){

    int max_color = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > max_color) {
            max_color = arr[i];
        }
    }
    printf("%d\n", max_color);

    int* color_count = (int*)calloc(max_color + 1, sizeof(int));

    for(int i=0; i< count; i++){
        color_count[arr[i]]++;
    }

    // for(int i = 0; i < max_color; i++){
    //     printf("%d", color_count[i]);
    // }

    int pair = 0;
    for(int i = 0; i < max_color + 1; i++){
        pair += (color_count[i] / 2);
    }

    free(color_count);

    return pair;

}
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    for(int i = 0 ; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int result = pair(arr, size);

    printf("%d", result);

    free(arr);
    return 0;
    
}
