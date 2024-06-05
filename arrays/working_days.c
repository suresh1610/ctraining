#include<stdio.h>
void getInput(int* arr, int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}
int main(){
    int num1, num2, found = 0;
    printf("No of elements for num1:\n");
    scanf("%d", &num1);
    printf("No of elements for num2:\n");
    scanf("%d", &num2);
    int arr1[num1];
    int arr2[num2];
    printf("Elements for arr1:\n");
    getInput(arr1, num1);
    printf("Elements for arr2\n");
    getInput(arr2, num2);
    for(int i = 0; i < num1; i++){
        found = 0;
        for(int j = 0; j < num2; j++){
            if(arr1[i] == arr2[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            printf("%d", arr1[i]);
        }
    }
    return 0;
}