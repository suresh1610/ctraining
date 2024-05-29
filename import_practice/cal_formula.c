#include<stdio.h>
#include "formula.c"
int main(){
    int a,b, result;
    printf("Enter the inputs:");
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a < 0) || (b < 0)){
        printf("Invalid Input");
    } else {
        printf("%d\n",add(a,b));
        printf("%d\n",sub(a,b));
        printf("%d\n",mul(a,b));
        printf("%d\n",div(a,b));
    }
    return 0;
}