#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int size,num;

    printf("Enter the size\n");
    scanf("%d", &size);
    ptr = (int*)malloc(size * sizeof(int));

    for(int i = 1; i <= size; i++){
        ptr[i] = i+i;
    }
    for(int i = 0; i < size; i++){
        printf("%d", ptr[i]);
    }
    return 0;
}