#include<stdio.h>
int main(){
    int names[100];
    int i = 0;
    while(i >= 0){
        scanf("%d", &names[i]);
        if(names[i] == '\0'){
            break;
        }
        i++;
    }
    for(int j = 0; j < i; j++){
        printf("%d", names[j]);
    }
    return 0;
}