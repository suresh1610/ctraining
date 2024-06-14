#include<stdio.h>
int main(){
    int count = 0;
    char names[20];
    fgets(names, sizeof(names), stdin);
    printf("%s", names);
    char with_out_space[20];
    for(int i = 0; i < sizeof(names); i++){
        if(names[i] == ' '){
            continue;
        } else {
            with_out_space[count] = names[i];
            count++;
        }
    }
    printf("%s", with_out_space);
    return 0;
}
