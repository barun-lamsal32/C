#include<stdio.h>
#include<conio.h>
int main () {
    int a;
    printf("Enter an age");
    scanf("%d",&a);
    if (a >= 18) {printf ("can vote\n");}
    else if (a<18) {("cannot vote\n");}
    getch ();
    return 0;
}
