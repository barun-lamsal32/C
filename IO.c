#include<stdio.h>

int main() {

    int a, b;
    char ch;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Input operator
    printf("Enter operator: ");
    scanf(" %c", &ch);  // Space before %c to consume any leftover newline character


    switch (ch) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
