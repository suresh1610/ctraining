#include<stdio.h>
int fibno(int num){
    int a=0, b=1, result;
    if ( num == 1){
        printf("0");
    } else if (num == 2){
        printf("1");
    } else {
        for (int i = 3; i <= num; i++){
            result = a + b;
            a = b;
            b = result;
        }
    }
    return result;
}