#include<stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    int comb = factorial(n) / (factorial(r) * factorial(n - r));
    return comb;
}

int main() {
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    if(rows < 1) {
        printf("Invalid number\n");
        return 0;
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= rows - i; j++) {
            printf("  ");
        }
        for(int k = 0; k <= i; k++) {
            printf("%d   ", combination(i, k));
        }
        printf("\n");
    }

    return 0;
}
