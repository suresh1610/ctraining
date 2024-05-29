#include<stdio.h>
// #include "fibno.c"
// #include "decimal_bi.c"
#include "pattern.c"
int main(){
    int user_input;
    printf("Enter Input:\n");
    scanf("%d", &user_input);
    pattern_form(user_input);
    return 0;
}
