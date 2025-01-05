#include<stdio.h>
#include<conio.h>

int main () {
    float x, y, result;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    getchar();

    printf("Enter a mathematical operator (+, -, *, /): ");
    scanf("%c", &ch);

    if (ch == '*') {
        result = x * y;
        printf("\nResult is %.2f", result);
    }
    else if (ch == '+') {
        result = x + y;
        printf("\nResult is %.2f", result);
    }
    else if (ch == '-') {
        result = x - y;
        printf("\nResult is %.2f", result);
    }
    else if (ch == '/') {
        if (y != 0) {
            result = x / y;
            printf("\nResult is %.2f", result);
        } else {
            printf("\nError! Division by zero.");
        }
    }
    else {
        printf("Invalid operator\n");
    }

    getch();
    return 0;
}
