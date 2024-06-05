#include<stdio.h>
int sub_strings(char *sub_name, int from, int n, char *target){
    int count = 0;
    for(int i = from; i > 0; i++){
        *target = *sub_name;
        count++;
        if(count == n){
            break;
        }
    }
}
int main(){
    char name;
    int num;
    int count;
    char target_string;
    scanf(" %[^\n]s", name);
    scanf("%d", &num);
    scanf("%d", &count);
    sub_strings(name, num, count, target_string);
    for(int i = 0; i < count; i++){
        printf("%c", target_string);
    }
    return 0;
}