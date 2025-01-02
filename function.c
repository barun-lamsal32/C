#include <stdio.h>
int fact(int n);
int main() {
    long f1 = 1, f2 = 1, f3 = 1, comb;
    int n, r;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);
    if (r > n) {
        printf("Error: r cannot be greater than n.\n");
        return 1;
    }
    f1 = fact(n);
    f2 = fact(n - r);
    f3 = fact(r);
    comb = f1 / (f2 * f3);
    printf("The combination C(%d, %d) is %ld\n", n, r, comb);
    return 0;
}
int fact(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
