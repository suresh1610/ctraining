#include<stdio.h>
int main(){
    int num,i,j;
    for (i = 1;i<=9;i++){
        printf("\n");
        for (j=1;j<=9;j++){
            num = i*j;
            if(num < 10){
                printf("  %d",num);
            } else {
                printf(" %d", num);
            }
        }
    }
    return 0;
}