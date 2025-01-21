#include <stdio.h>

int main() {
    int x = 6, y = 3;

    printf("x\ty\texpressions\tresults\n"); 
    printf("%2d\t|\t%d\t|\tx=y+3\t\t| x=%d\n", x, y, y + 3);
    printf("%d\t%d\tx=y-2\t\t| x=%d\n", x, y, y - 2);
    printf("%d\t%d\tx=y*5\t\t| x=%d\n", x, y, y * 5);
    printf("%d\t%d\tx=x/y\t\t| x=%d\n", x, y, x / y);
    printf("%d\t%d\tx=x%%y\t\t| x=%d\n", x, y, x % y); 

    return 0;
}
