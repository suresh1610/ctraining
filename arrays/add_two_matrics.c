#include<stdio.h>
#include<stdlib.h>
int getInput(int** array, int row_size, int col_size){
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < col_size; j++){
            printf("Enter the elements :");
            scanf("%d", &array[i][j]);
        }
    }
}
int main(){
    int first_row, first_col, sec_row, sec_col;
    printf("Enter the row size of 1st\n");
    scanf("%d", &first_row);
    printf("Enter the column size of 1st\n");
    scanf("%d", &first_col);
    printf("Enter the row size of 2nd\n");
    scanf("%d", &sec_row);
    printf("Enter the column size of 2nd\n");
    scanf("%d", &sec_col);

    int** arr1 = (int**)malloc(first_row * sizeof(int));
    for(int i = 0; i < first_row; i++){
        arr1[i] = (int*)malloc(first_col * sizeof(int));
    }

    int** arr2 = (int**)malloc(sec_row * sizeof(int));
    for(int i = 0; i < sec_row; i++){
        arr2[i] = (int*)malloc(sec_col * sizeof(int));
    }

    getInput(arr1, first_row, first_col);
    getInput(arr2, sec_row, sec_col);

}