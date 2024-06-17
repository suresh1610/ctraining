#include<stdio.h>
void reverse(int *num){
    int temp, result = 0;
    while(*num != 0 ){
        temp = *num % 10;
        result = (result * 10) + temp;
        *num /= 10;
    }
    *num = result;

}
int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("num1 is %d, num2 is %d\n", num1, num2);
    int add_of_two = num1 + num2;
    // printf("%d", add_of_two);
    reverse(&add_of_two);
    printf("%d", add_of_two);
    return 0;
}