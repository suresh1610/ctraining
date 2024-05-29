#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    while(num){
        printf("%d",num);
        if (num == 10){
            break;
        }
        num++;
    }
    return 0;
}