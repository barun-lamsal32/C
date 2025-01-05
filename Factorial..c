#include <stdio.h>

int main() {
    int num,factorial,s=1;
    //unsigned long long factorial = 1; // Use unsigned long long for larger results

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
             s= s*i;
        }

        // Output the result
        printf("Factorial of %d = %d\n", num, s);
    }

    return 0;
}
