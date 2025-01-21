#include <stdio.h>

#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /

int main() {
    int x = 6, y = 3;
    int z;

    z = x PLUS y; 
    printf("x PLUS y = %d\n", z);

    z = x MINUS y;
    printf("x MINUS y = %d\n", z);

    z = x MULT y;
    printf("x MULT y = %d\n", z);

    z = x DIVIDE y;
    printf("x DIVIDE y = %d\n", z);

    return 0;
}
