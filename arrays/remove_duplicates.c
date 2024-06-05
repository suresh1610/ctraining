#include<stdio.h>
int main(){
    int count = 0, k = 0, j;
    char string[50];
    scanf(" %[^\n]s", string);
    char result_string[50];

    while(string[count] != '\0'){
        count++;
    }
    for(int i = 0; i < count; i++){
        for(j = i+1; string[j] != '\0'; j++){
            if(string[i] == string[j]){
                for(int k = j; string[k] != '\0';k++){
                    string[k] = string[k+1];
                }
            }
        }
    }
    printf("%s", string);
    return 0;
}