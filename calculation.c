#include<stdio.h>
#include "addition.c"
int main(){
    int a,b, result;
    scanf("%d %d", &a, &b);
    result = add(a,b);
    printf("%d", result);
    return 0;

}