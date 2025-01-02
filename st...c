#include<stdio.h>
#include<conio.h>
int main () {
    char string [10];
    printf("Enter your name");
    scanf("%[^A-Z]",string);
    printf("your name is %s",string);
    getch();
    return 0;
}
