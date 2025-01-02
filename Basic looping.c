#include <stdio.h>
int main() {
    int num;
    unsigned long long sum = 0;
    int i;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        sum += i;
    }
    printf("\nThe sum of numbers is %llu", sum);
    return 0;
}
