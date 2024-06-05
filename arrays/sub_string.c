#include<stdio.h>
int sub_string(char *source, int from, int m, char* target){
    int source_count = 0;
    int count = 0;
    while(source[source_count] != '\0'){
        source_count++;
    }
    if(source_count < 0 || (source_count < from)){
        printf("Staring index is invalid\n");
        return 1;
    }
    for(int i = from;i < source_count;i++ ){
        // if(count == m){
        //     printf("%s", target);
        //     return 1;
        // } else 
        if(count != m){
            target[count] = source[i];
            count++;
        } else {
            printf("%s", target);
            break;
        }
    }
}
int main(){
    char name[50];
    int start;
    int count;
    char result[count];
    scanf(" %[^\n]s", name);
    scanf("%d", &start);
    scanf("%d", &count);
    sub_string(name, start, count, result);
    return 0;
}