#include<stdio.h>
int main(){
    int nums[] = {3,2,2,3};
    int val = 3;
    int count = sizeof(nums) / sizeof(nums[0]);
    int j = 0;
    for(int i = 0; i <= count; i++){
        if(nums[i] == val){
            nums[i] = '_';
        }
    }
    for(int i = 0; i <= count; i++){
        printf("%c", nums[i]);
        printf("\n");
    }
}