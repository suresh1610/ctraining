#include<stdio.h>
#include<stdlib.h>
int main(){
    int size_1, size_2, flag;
    int* arr1;
    int* arr2;
    printf("Enter the first array size:\n");
    scanf("%d", &size_1);

    arr1 = (int*)malloc(size_1 * sizeof(int));
    arr2 = (int*)malloc(size_2 * sizeof(int));

    for(int i = 0;i < size_1; i++){
        printf("Enter your elements for array 1: ");
        scanf("%d", &arr1[i]); 
    }

    printf("Enter the second array size:\n");
    scanf("%d", &size_2);
    for(int i = 0; i < size_2; i++){
        printf("Enter the elements for array 2: ");
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < size_1; i++){
        flag = 0;
        for(int j = 0; j< size_2; j++){
            if(arr1[i] == arr2[j]){
                flag =1;
                break;
            }
        }
        if (flag == 0){
            printf("%d", arr1[i]);
        }
    }

    // for(int i = 0;i < size_1; i++){
    //     printf("Element of array 1 is--> %d\n", arr1[i]); 
    // }
    // for(int i = 0; i < size_2; i++){
    //     printf("Element of array 2 is --->%d\n", arr2[i]);
    // }
    return 0;
}