#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i = num; i > 0; i++){
        if((i % 4 == 0) && (i % 6 == 0)){
            printf("%d", i);
            break;
        } else {
            continue;
        }
        // printf("%d\n", i);
    }
    return 0;
}