#include <stdio.h>

// Function to calculate the sum of three integers
void sum(int a, int b, int c) {
    printf("%d", a+b+c);
}

int main() {
    int r1, r2, r3;

    // Read three integers from user input
    scanf("%d", &r1);
    scanf("%d", &r2);
    scanf("%d", &r3);

    // Check if any of the integers are negative
    if (r1 > 0 || r2 > 0 || r3 > 0) {
        sum(r1, r2, r3); // Calculate the sum
    }

    return 0; // Return 0 to indicate successful execution
}
