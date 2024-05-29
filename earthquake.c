#include<stdio.h>
#include<math.h>
int main(){
    float magn;
    const float t = 0.0001;
    printf("Enter Magnitude:");
    scanf("%f", &magn);
    if (magn <= 0){
        printf("Invalid Magn");
    } else if ((magn > 0) && ((fabs(magn - 2.4) <= t) || (magn < 2.4))){
        printf("Micro");
    }
    else {
        printf("Great");
    }
    return 0;
}