/*Write a program to check odd or even number (a) using modulus 
operator (b) using bitwise operator (c) without using bitwise and 
modulus operator (d) using conditional operator*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // (a) Using modulus operator
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // (b) Using bitwise AND operator
    if ((num & 1) == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // (c) Without using bitwise and modulus operator
    if ((num >> 1) << 1 == num) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // (d) Using conditional operator
    printf("%d is %s.\n", num, (num & 1) == 0 ? "even" : "odd");

    return 0;
}
