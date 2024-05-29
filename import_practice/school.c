#include<stdio.h>
int main(){
    int col, row, sup, f_sdu;
    printf("Enter colume:");
    scanf("%d", &col);
    printf("Enter row:");
    scanf("%d", &row);
    printf("Suspected col:");
    scanf("%d", &sup);
    printf("first sdutent roll number:");
    scanf("%d", &f_sdu);
    printf("The suspected students are:\n");
    for (int i = 1; i <= row; i++){
        // printf("%d", i);
        for (int j = 1; j <= col; j++){
            // printf("%d ", f_sdu);
            if ( j == sup){
                printf("%d ", f_sdu);
            }
            f_sdu++;
        }
    }
    return 0;
}