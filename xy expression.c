#include<stdio.h>

int main() {
    int x = 6, y = 3;

    printf("x\ty\texpressions\tresults\n");

    // Expression 1: x = y + 3
    printf("%d\t%d\tx = y + 3\t x = %d\n", x, y, y + 3);

    // Expression 2: x = y - 2
    printf("%d\t%d\tx = y - 2\t x = %d\n", x, y, y - 2);

    // Expression 3: x = y * 5
    printf("%d\t%d\tx = y * 5\t x = %d\n", x, y, y * 5);

    return 0;
}
