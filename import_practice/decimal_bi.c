// #include<stdio.h>
// void deci_to_bi(int num){
//     int temp, result = 0;
//     while (num != 0){
//         temp = num % 2;
//         result = (result*10) + temp;
//         // printf("%d", temp);
//         num /= 2;
//     }
//     printf("%d",result);
// }
while(1){
    scanf("%d", &score);
    sum = sum + score;
    if (sum > 100){
        break;
    }
    count++
}
printf("%d", count);