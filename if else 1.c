#include<stdio.h>
#include<conio.h>
int main () {
    int a;
    printf("Enter number 1-7");
    scanf("%d",&a);
    if (a==1) {printf("Sunday \n");}
    else if (a==2) {printf("monday \n");}
   else  if (a==3) {printf("tuesday \n");}
    else if (a==4) {printf("wednesday \n");}
   else  if (a==5) {printf("thursday \n");}
    else if (a==6) {printf("friday \n");}
    else if (a==7) {printf("saturday \n");}
    getch ();
    return 0;
}
