/*Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x++ + ++x; b. y=++x + ++x;
c. y= ++x + ++x + ++x; d. y = x>z;
e. y= x>z? x:z; f. y = x&z;
g. y= x>>2 + z<<1; */


#include <stdio.h>

int main() {
    int x = 2;
    int z = 4;
    int y;

    // a. y = x++ + ++x;
    x = 2; 
    y = x++ + ++x; 
    printf("a. y = %d, x = %d\n", y, x); // Output: a. y = 6, x = 4

    // b. y=++x + ++x;
    x = 2; 
    y = ++x + ++x; 
    printf("b. y = %d, x = %d\n", y, x); // Output: b. y = 7, x = 4

    // c. y= ++x + ++x + ++x; 
    x = 2; 
    y = ++x + ++x + ++x; 
    printf("c. y = %d, x = %d\n", y, x); // Output: c. y = 12, x = 5

    // d. y = x>z; 
    x = 2; 
    y = x>z; 
    printf("d. y = %d, x = %d, z = %d\n", y, x, z); // Output: d. y = 0, x = 2, z = 4

    // e. y= x>z? x:z; 
    x = 2; 
    y = x>z? x:z; 
    printf("e. y = %d, x = %d, z = %d\n", y, x, z); // Output: e. y = 4, x = 2, z = 4

    // f. y = x&z;
    x = 2; 
    y = x&z; 
    printf("f. y = %d, x = %d, z = %d\n", y, x, z); // Output: f. y = 0, x = 2, z = 4

    // g. y= x>>2 + z<<1;
    x = 2; 
    y = x>>2 + z<<1; 
    printf("g. y = %d, x = %d, z = %d\n", y, x, z); // Output: g. y = 8, x = 2, z = 4

    return 0;
}
