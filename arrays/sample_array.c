#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1_size, temp_n1;
    int* n1;
    scanf("%d", &n1_size);

    n1 = (int*)malloc(n1_size * sizeof(int));

    for (int i = 0; i < n1_size; i++){
        printf("Enter your elements:\n");
        scanf("%d", &temp_n1);
        n1[i] = temp_n1;
    }
    for (int i = 0; i < n1_size; i++){
        printf("%d", n1[i]);
    }
    return 0;
}