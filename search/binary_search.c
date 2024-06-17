#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr_size;
    printf("Enter the array size:\n");
    scanf("%d", &arr_size);

    int* arr = (int*)malloc(arr_size * sizeof(int));
    printf("Enter Your Elements: \n");
    for(int i = 0; i < arr_size; i++){  // get element by using for loop
        scanf("%d", &arr[i]);
    }

    int find_ele;
    printf("Enter which element you need to find:\n");
    scanf("%d", &find_ele);

    for(int i = 0; i < arr_size; i++){
        if(arr[i] == find_ele){
            printf("The element %d index is %d\n",find_ele,i);
            break;
        }
    }
    free(arr);
    return 0;
}