#include<stdio.h>
int main(){
    int num, temp, count = 0, digit_count;
    int arr[1000];
    scanf("%d", &num);

    while(num != 0){
        temp = num % 10;
        arr[count] = temp;
        num /= 10;
        count++;
    }
    for(int i = 0; i <= 9; i++){
        digit_count = 0;
        for(int j = 0; j < count; j++){
            if(arr[j] == i){
                digit_count++;
            }
        }
        printf("Frequency of %d = %d\n", i, digit_count);
    }
    return 0;
}
