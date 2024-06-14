#include<stdio.h>
int main(){
    int arrays[];
    int count = 0;
    while(count != 0){
        scanf("%d", &arrays[count]);
        if(arrays[count] == '\0'){
            break;
        }
        count++;
    }
    return 0;
}