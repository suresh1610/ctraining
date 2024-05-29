#include<stdio.h>
void pattern_form(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j < 2*i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = num-1; i >= 1; i--){
        for (int j = 1; j < i*2; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}