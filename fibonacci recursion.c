#include <stdio.h>


int fibonacci(int n) {
    if (n == 0) 
        return 0;  // Base case
    else if (n == 1) 
        return 1;  // Base case
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int num = 6;
    printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));
    return 0;
}
