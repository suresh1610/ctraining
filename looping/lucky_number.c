#include<stdio.h>
int main(){
    int start, end, count = 0, first_num, mid_num, last_num, sum;
    scanf("%d %d", &start, &end);
    if ((start <= 99) || (start >=1000) || (end <= 99) || (end >= 1000)){
        printf("Provide a valid door number");
    } else {
        for(int i = start; i <= end; i++){
            first_num = i / 100;
            last_num = i % 10;
            mid_num = (i / 10)-(first_num * 10);
            if((first_num + last_num) == mid_num){
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}